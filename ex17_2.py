# -*- coding:utf-8 -*-
from sys import argv
script, from_file_name, to_file_name = argv

open(to_file_name, 'w').write(open(from_file_name,'r').read())

output.close()

