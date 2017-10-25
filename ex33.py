# -*- coding:utf-8 -*-

from sys import argv
print("=============================================")

script, element, bufu = argv

def add_element(ele, bufu):
	numbers = []
	print("At the top i is %d" % ele)

	for i in range(0, ele, bufu):
		numbers.append(i)
		print("Number now: ", numbers)
		print("At the bottom i is %d" % i)
	return numbers

numbers = add_element(int(element), int(bufu)) 
12354
print("The numbers:")
for num in numbers:
	print(num)