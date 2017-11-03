# -*- coding: utf-8 -*-
print("==========================================")

from sys import argv
script_name, first_var = argv

print("the script is called:", script_name)
print("the first var is:", first_var)
name = input("name: ")
age = input("age: ")
print("My name is %r" % name)
print("My age is %r" % age)