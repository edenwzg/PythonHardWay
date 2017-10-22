# -*- coding: utf-8 -*-
from __future__ import print_function
from sys import argv

print("=====================================")

# argv拆包
script, input_file_name = argv

# 定义函数，打印文件所有内容
def print_all(f):
	print(f.read())

# 定义函数，传递一个文件对象，倒回到文件起始位置
def rewind(f):
	f.seek(0)
# 定义函数，输出行号和单行文字
def print_a_line(line_count, f):
	print(line_count, f.readline(),end='')

# //////////////////////////////////////////////////////////////
# 打开文件，并把文件对象保存在变量中
current_file = open(input_file_name)

print("First let's print the whole file:\n")
# 调用print_all函数，打印文件所有文件内容
print_all(current_file)
print('\n')

print("Now let's rewind, kind of like a tape.")
# 调用倒回函数，传如文件对象
rewind(current_file)

print("Let's print trree line:")
# 行号初始化为1
current_line = 1
# 调用打印单行函数，传入行号和文件对象
print_a_line(current_line, current_file)

# 行号自增
current_line += 1
# 调用打印单行函数，传入行号和文件对象
print_a_line(current_line, current_file)

# 行号自增
current_line += 1
# 调用打印单行函数，传入行号和文件对象
print_a_line(current_line, current_file)