# -*- coding: utf-8 -*-

print("======================================")
# 变量x存储 "There are 10 types of people."
x = "There are %d types of people." % 10
binary = "binary"
do_not = "don't"
# 变量y存储 "Those who know binary and those who don't."
y = "Those who know %s and those who %s." % (binary, do_not)

print(x)
print(y)
# 连接 I said: 和 变量x的字符串，%r 替换字符串时自动加引号
print("I said: %r." % x)
# 连接 I also said: 和 变量y的字符串， %s 替换字符串是不加引号
print("I also said: '%s'." % y)

hilarious = False
# 可以单独将一段包含占位符的字符串存入变量（不包含占位符替换内容）
joke_evaluation = "Isn't that joke so funny?! %r" # %r 替换Bool类型原样输出

# 将占位符替换内容以变量形式通过 % 与包含占位符的字符串变量结合，生成完整的格式化字符串
print(joke_evaluation % hilarious)

w = ("This is the left side of...")
e = ("a string with a right side.")

print(w + e)