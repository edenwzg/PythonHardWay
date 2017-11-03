# -*- coding: utf-8 -*-
print("======================================")

from sys import argv
# argv 解包（unpack）
script, first, second, third = argv

print("The script is called:", script)
print("Your first variable is:", first)
print("your second variable is:", second)
print("your third variable is:", third)