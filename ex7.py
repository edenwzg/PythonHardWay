# -*- codint: utf-8 -*-

print("=============================================")
# 输出一句话“马丽有一只小羊”
print("Mary had a little lamb")
# 输出“它的羊毛像雪一样白”
print("Its fleece was white as %s." % 'snow')
# 输出“无论玛丽去哪里”
print("And everywhere that Mary went.")
# 输出10个“.”
print("." * 10) # what'd that do?

# 12个字符串变量，每个变量存储1个字符
end1 = "C"
end2 = "h"
end3 = "e"
end4 = "e"
end5 = "s"
end6 = "e"
end7 = "B"
end8 = "u"
end9 = "r"
end10 = "g"
end11 = "e"
end12 = "r"

# watch that comma at the end. try removing it to see what happens
# 通过连接6个字符串，组成一个单词"Cheese", 
# 逗号后面是print()函数的第二个参数，
# 将 end=' '作为第二个参数代表输出完成后，后面跟一个' ' 默认是跟一个换行符 
print(end1 + end2 + end3 + end4 + end5 + end6, end=' ')
# 通过连接6个字符串，组成一个单次"Burger", 和上一行组成一个词组 "Cheese Burger"
print(end7 + end8 + end9 + end10 + end11 + end12)