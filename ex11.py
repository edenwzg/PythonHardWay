# -*- coding: utf-8 -*-

from __future__ import print_function
print("========================================")
# 在print()后面加一个逗号，这样print()就不会输出新的行符。
print("How old are you?", end = ' ')
age = input()

print("How tall are you?", end = ' ')
height = input()

print("How much do you weigh?", end = ' ')
weight = input()

print("so, you're %r old, %r tall and %r heavy." % (
    age, height, weight))

