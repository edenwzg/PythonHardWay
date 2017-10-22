# -*- coding: utf-8 -*-
print("=====================================")

# 导入sys模块中的argv
from sys import argv
# 将argv拆包（unpack）存入两个变量
script, filename = argv

# 输出提示“我们将会删除文件的内容”
print("We're going to erase %r." % filename)
# 输出提示“如果你不想这么做，输入CTRL-C”
print("If you don't want that, hit CTRL-C (^c).")
# 输出提示“如果你想这么做”，给出反馈
print("If you do want that, hit RETURN.")

# 输出问号，提示用户输入内容
raw_input("?")

# 输出提示“打开文件”
print("Opening the file...")
# 以可写入方式打开文件，并把打开的文件对象保存在变量中
target = open(filename, 'w')

# 输出提示“删除文件内容。再见”
print("Truncating the file. Goodbye!")
# 删除文件内容
target.truncate()

# 输出提示“现在我要让你输入3行内容”
print("Now I'm going to ask you for three lines.")

# 提示用户并要求其输入三行内容，并保存在3个变量中
line1 = raw_input("line 1: ")
line2 = raw_input("line 2: ")
line3 = raw_input("line 3: ")

# 输出提示“我将要把它们写入文件”
print("I'm goint to write these to the file.")

# 调用文件对象的写入操作，将数据写入文件对象中
target.write("%s\n%s\n%s\n" % (line1, line2, line3))

# 输出提示“最终，我们要关闭这个文件”
print("And finally, we close it.")
# 调用文件对象的关闭方法来关闭这个文件对象
target.close()
