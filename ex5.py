# -*- coding: utf-8 -*-

print("=========================================")
name = 'Zed A. Shaw'
age = 35 # not a lie
height = 74 # inches
weight = 180 # lbs
eyes = 'Blue'
teeth = 'White'
hair = 'Brown'

in_to_cm = 2.54
lb_to_kg = 0.4535924

print("Let's talk about %s." % name)
print("He's %d inches(%dcm) tall." % (height, height * in_to_cm))
print("He's %d pounds(%.2fkg) heavy." % (weight, round(weight * lb_to_kg,2)))
print("Actually that's not too heavy.")
print("His teeth are usually %s depending on the coffee." % teeth)

# this line is tricky, try to get it exactly right
print("If I add %d, %d, and %d I get %d." % (
    age, height, weight, age + height + weight))
    
print("test %r" % 'alsj\n'+"5")
print("formatString %%c%c: " % "\a") # \a 发出‘哔’的一声