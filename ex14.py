# -*- coding: utf-8 -*-
print("===========================================")

from sys import argv

script, user_name, user_age = argv
prompt = '> '
computer_age = 3

print("Hi %s, I'm the %s script." % (user_name, script))
print("I'm %d years old, %d years younger than you" % (computer_age, int(user_age) - computer_age))
print("I'd like to ask you a few questions.")
print("Do you like me %s?" % user_name)
likes = input(prompt)

print("Where do you live %s?" % user_name)
lives = input(prompt)

print("What kind of computer do you have?")
computer = input(prompt)

print("""
Alright, so you said %r about liking me.
You live in %r. Not sure where that is.
And you have a %r computer. Nice.
""" % (likes, lives, computer))