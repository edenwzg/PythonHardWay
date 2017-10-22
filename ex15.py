# -*- coding: utf-8 -*-
print("===============================")

# 导入sys.argv模块,传递给python脚本的命令行参数列表
from sys import argv

# 将argv unpack 保存在两个变量 script & filename 中
# script 是脚本第一个参数，代表脚本自身
# filename 用于让脚本接受一个文件名
script, filename = argv

# 通过open()方法 打开一个文件并把文件保存在 txt 变量中
txt = open(filename)

# 输出一小段文字，和显示打开的文件的文件名
print("Here's your file %r:" % filename)
# 使用 read()方法 读取文件内容，并输出
print(txt.read())
# 有大开就要有关闭
txt.close()
# 输出一个空行
print("\n")

# 输出提示信息，提示用户再次输入文件名
print("Type the filename again:")
# 使用 input()方法获取用户输入的文件名，保存在变量 file_again 中
file_again = raw_input("> ")

# 再次通过 open()方法，打开一个文件，并把文件保存在 txt_again 变量中
txt_again = open(file_again)
# 再次通过read() 方法 读取文件内容，并输出
print(txt_again.read())
# 再次关闭文件，并写入刷新文件
txt_again.close()