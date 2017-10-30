# -*- coding: utf-8 -*-
# 导入随机库
import random
# 从 urllib 库导入 urlopen 方法，因为本代码中只使用了 urlopen() 方法。
from urllib import urlopen
# 从 sys 库导入 argv 功能，本代码中只使用了 sys.argv 功能。
from sys import argv  

###############################################################################################################
def convert(snippet, phrase):
	# 列表生成式 ———— 创建类名。
	# 每次转换一条 snippet 和 一条 phrase
	# 根据 snippet 中 "%%%" 的数量，决定需要几个类名，并随机取相应个数的 WORDS 中的名称列表。
	# 遍历名称列表，并将每个名称的首字母改为大写，并生成新的列表，赋值于变量 class_names，以便以后使用。
	class_names = [w.capitalize() for w in random.sample(WORDS, snippet.count("%%%"))]
	
	# 创建其他名称。和上一步的功能类似，只是不需要遍历修改首字母大写。
	other_names = random.sample(WORDS, snippet.count("***"))
	results = []
	param_names = []

	# 创建参数名称，根据 "@@@" 的数量，决定需要几组参数名，
	# 随机生成参数的个数，
	# 将参数使用逗号连接
	for i in range(0, snippet.count("@@@")):
		param_count = random.randint(1, 3)
		param_names.append(', '.join(random.sample(WORDS, param_count)))

	# 分别处理 snippet 和 phrase
	# 并使用列表切片拷贝一个新的列表进行处理
	for sentence in snippet, phrase:
		result = sentence[:]

		# 在 "%%%" 的地方替换类名
		for word in class_names:
			result = result.replace("%%%", word, 1)

		# 在 "***" 的地方替换其他名称
		for word in other_names:
			result = result.replace("***", word, 1)

		# 在 "@@@" 的地方替换参数列表名称
		for word in param_names:
			result = result.replace("@@@", word, 1)
		# 将替换结果保存在 results 列表中
		results.append(result)

	# 返回一个包含 snippet 和 phrase 的列表
	return results
###############################################################################################################

# 单词库，用于变量名
WORD_URL = "http://learncodethehardway.org/words.txt"

# 短语模板，用于套用短语格式输出短语。
PHRASES = {
	"class %%%(%%%):":
		"Make a class name %%% that is-a %%%.", # 创建一个名字为 %%% 的类，那是一个 %%% 类。
	"class %%%(object):\n\tdef __init__(self, @@@)":
		"class %%% has-a __init__ that takes self and @@@ parameters.", # 类 %%% 有一个 __init__ 方法，它使用 self 和 @@@ 作为参数
	"class %%%(object):\n\tdef ***(self, @@@)":
		"class %%% has-a function name *** that takes self and @@@ parameters.", # 类 %%% 有一个方法名 ***，它使用 self 和 @@@ 作为参数
	"*** = %%%()":
		"Set *** to an instance of class %%%.", # 指定 *** 为 %%% 类的实例
	"%%%.***(@@@)":
		"From %%% get the *** function, and call it with paramters self, @@@.", # 从 %%% 类访问 *** 方法，使用 self, @@@ 作为函数的参数
	"%%%.*** = '***'":
		"From %%% get the *** attribute and set it to '***'." # 从 %%% 类访问 *** 属性，并设置它的值为 ***。
}

# 如果用户在第二个运行参数中输入 "english"，那么会将 PHRASE_FIRST = True, 将问题和答案反转，进行提问
PHRASE_FIRST = False
if len(argv) == 2 and argv[1] == "english":
	PHRASE_FIRST = True

# 从 WORD_URL 中读取单次，并将单词去除空格后赋予 WORDS 列表。
WORDS = []
[WORDS.append(word.strip()) for word in urlopen(WORD_URL).readlines()]
print "word loaded from %s" % WORD_URL

# keep going until they hit CTRL-C
try:
	while True:
		# 获取短语的 Key————snippets，并随机打乱 snippets
		snippets = PHRASES.keys()
		random.shuffle(snippets)

		for snippet in snippets:
			# 根据 PHRASES 的 Key 获得 value
			phrase = PHRASES[snippet]
			# 将 key 和 value 作为参数调用模板转换函数，进行内容转换
			question, answer = convert(snippet, phrase)
			# 如果 PHRASE_FIRST 为 True 将问题和答案反转
			if PHRASE_FIRST:
				question, answer = answer, question

			# 输出问题和答案
			print question
			
			raw_input("> ")
			print "ANSWER: %s\n\n" % answer
except EOFError:
	print "\nBye"

