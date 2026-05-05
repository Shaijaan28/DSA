student = {
    "name" : "sohail",
    "subject" : {
        "phy" : 43,
        "chem " : 78,
        "urdu" : 79
    }
}

#print(student["subjects"] ["chem"])

#method
#.Keys()

print(student.keys())
print(list(student.keys()))
print(len(student))

#.values()
print(student.values())
#print(list(student.values()))

#.items()
print(list(student.item()))

#.get()
print(student["name2"]) # error
print(student.get("name2")) #no error

#.update()
student.update({"city" : "dhanbad"})