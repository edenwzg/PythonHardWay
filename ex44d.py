class Parent(object):

	def override(self):
		print "PARENT override()"

	# 子类的方法隐性继承父类方法
	def implicit(self):
		print "PARENT implicit()"

	def altered(self):
		print "PARENT altered()"


class Child(Parent):

	# 子类重写父类的方法
	def override(self):
		print "CHILD override"

	# 子类调用父类的 altered() 方法
	def altered(self):
		print "CHILD, BEFORE PARENT altered()"
		super(Child, self).altered()
		print "CHILD AFTER PARENT altered()"


dad = Parent()
son = Child()

dad.implicit()
son.implicit()

dad.override()
son.override()

dad.altered()
son.altered()
