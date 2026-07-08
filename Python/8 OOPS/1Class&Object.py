class Student:
    college_name = "GGSESTC"
    
    name = "shaijaan"
    #parameterizes constructora
    def __init__(self, fullname, marks):
        self.name = fullname
        self.marks = marks
        print("add new student in database")
    def welcome(self):
        print("welcome student")    
   
s1 = Student("rauf", 97)
print(s1.name)
s1.welcome()

class Car:
    color = "blue"
    brand = "mercedes"
car1 = Car()
print(car1.color)
print(car1.brand)            