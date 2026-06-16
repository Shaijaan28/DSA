x,y,z=10,5,20
 
result = x==20 or y==6
print(result)

x=20
y=20
result = x is y
print(result)

a = True
b = 1
result = a is b
print(result)

list1 = [10, 20.5,30,'text']
list2 =  [10, 20.5,30,'text']
result = list1 is list2
print(result)

#membership
my_string = 'My name is shaijaan'
my_dict={
    1: 'Orage' 
}
age = int(input("Enter your age "))
if age < 18:
    print("You are a child")
elif age>= 28 and age <= 60:
    print("You are a adult")
elif age>= 60 :
    print("You are a old")       

#calculator


eng = int(input("Enter your Marks in English "))
sci = int(input("Enter your Marks in Science "))
math = int(input("Enter your Marks in Math "))
totalMarks = eng + sci + math
per = totalMarks/3;
if(per>90):
    print("A Grade")
elif (per>=80 and per<=90):
    print("B Grade")
elif (per>=70 and per<=80):
    print("c Grade")
elif (per>=60 and per<=70):
    print("D Grade")
else :
    print("E Grade")    
