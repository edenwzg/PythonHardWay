## Animal is-a object (yes, sort of confusing) look at the extra credit
class Animal(object):
	pass

# Dog is-a Animal
class Dog(Animal):
	def __init__(self, name)
	# Dog has-a name of some kind
	self.name = name

# Cat is-a Animal
class Cat(Animal):
	def __init__(self, name)
	# Cat has-a name of some kind
	self.name = name

# Person is-a object
class Person(object):
	def __init__(self, name)
	# person has-a name of some kind
	self.name = name

	# Person has-a pet of some kind
	self.pet = None

# Employee is-a Person
class Employee(Person):
	def __init__(self, name, salary):
		# hmm what is this strange magic?
		super(Employee, self).__init__(name)
		# Employee has-a salary
		self.salary = salary
		
# Fish is-a object
class Fish(object):
	pass

# Salmon is-a Fish
class Salmon(Fish):
	pass

# Halibut is-a Fish
class Halibut(Fish):
	pass

# rover is-a Dog
rover = Dog("Rover")

# satan is-a Cat
satan = Cat("Satan")

# mary is-a Person
mary = Person("Mary")

# mary has-a pet satan, satan is-a Cat
mary.pet = satan

# fank is-a Emploee, He has-a salary
fank = Emploee("Frank", 120000)

# frank has-a pet rover, rover is-a Dog
frank.pet = rover

# flipper is-a Fish
flipper = Fish()

# crouse is-a Salmon, Salmon is-a Fish
crouse = Salmon()

# harry is-a Halibut, Halibut is-a Fish
harry = Halibut()
