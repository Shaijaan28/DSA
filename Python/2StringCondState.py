str1 ="shaijaan rauf\n"
str2 ="ehramul"
print(str1 + str2)
print(len(str1))

str3 = "arsalan"
print(str3[5])

#Slicing
str4 = "Codewithrauf"
print(str4[5:9])

#slicing - negative index
str5 = "apple"
print(str5[-5:-2])

#String Function
# str6 = "i am studing in 4th sem"
# print(str6.endswith("em")) #  output - true or false
# print(str6.capitalize())
# print(str6.replace("a", "b"))
# print(str6.find("a"))
# print(str6.count("am")) 

#Conditional Statements
light = "green"
if(light == "red"):
    print("stop")
elif(light == "green"):
    print("look")
elif(light == "yellow"):
    print("slow")    
else:
    print("light is broken")


#grade on marks
marks =int( input("Enter your marks : "))
if(marks >= 90):
    grade = "A"
elif(marks >= 80 and marks < 90):
    grade = "B"
elif(marks >=70 and marks < 80):
    grade= "C" 
else:
    grade="D"  

print("Grade of the student : ", grade)      


#nesting
age = 58

if(age>= 18):
    if(age >= 80):
        print("cannot drive")
    else:
        print("can drive")    
else:
    print("cannot drive")


