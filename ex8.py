# -*- coding: utf-8 -*-
# 输出一个分割线
print("===================================")

# 定义一个格式化的变量，存储4个%r的格式化结构
formatter = "%r %r %r %r"
# 使用格式化变量输出4个整数值 
print(formatter % (1,2,3,4))
# 使用格式化变量输出4个字符串
print(formatter % ("one", "two", "three", "four"))
# 使用格式化变量输出4个bool值
print(formatter % (True, False, False, True))
# 使用格式化变量输出4个格式化变量
print(formatter % (formatter, formatter, formatter,formatter))
# 使用格式化变量输出4段长文本，并采用缩进方式，确保每行不超过80个字符
print(formatter % (
    "I had this thing'.",
    "That you could type up right.",
    #如果字符串中包含多重引号，那么%r 最外层使用双引号包裹
    "But it didn't sing.", 
    "So I said goodnight."
))

# print()中间包含括号的时候忘记打最后的print()的括号
    # SyntaxError: unexpected EOF while parsing
# print()写成pring()
    # NameError: name 'pring' is not defined
# 运行程序前忘记保存源代码文件
    
