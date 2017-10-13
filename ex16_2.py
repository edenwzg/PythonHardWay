# -*- coding: utf-8 -*-
print("=================================================")

from sys import argv
script, filename = argv

txt = open(filename)
print(txt.read())
txt.close()
