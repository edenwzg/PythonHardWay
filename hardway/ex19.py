# -*- coding: utf-8 -*-
print("====================================")

# 定义函数，将两个参数作为文本打内容印出来
def cheese_and_crackers(cheese_count, boxes_of_crackers):
	print("You have %d cheeses!" % cheese_count)
	print("You have %d boxes of crackers!" % boxes_of_crackers)
	print("Man that's enough for a party!")
	print("Get a blanket.\n")

print("We can just give the function numbers directly:")

# 使用常量作为参数调用函数
cheese_and_crackers(20, 30)

print("OR, we can use variables from our script:")
# 定义两个变量
amount_of_cheese = 10
amount_of_crackers = 50

# 使用变量作为参数调用函数
cheese_and_crackers(amount_of_cheese, amount_of_crackers)

print("We can even do math inside too:")
# 使用常量表达式作为参数调用函数
cheese_and_crackers(10 + 20, 5 + 6)

print("And we can combine the two, variables and math:")
# 使用带变量的表达式作为参数调用函数
cheese_and_crackers(amount_of_cheese + 100, amount_of_crackers + 1000)
	