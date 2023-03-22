class Person:
    def __init__(self, name):
        self.call = name
    def talk(self):
        print("talks")
person = Person("Ankit")
print(person.call)
person.talk()

# __init__ is used to make a constructor.
# .name is an attribute of the object that will be created later. In Same way the self is positioning to the same object.
# Person class takes the attributes within the paranthesis and by default the object created for class is initilized with an attribute with the help of constructor.