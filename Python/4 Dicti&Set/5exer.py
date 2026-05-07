dictionary = {
    "cat" : "a small animal",
    "table": ["a piece of furniture", "list of facts & figuers"]
}

#find length
subjects ={
    "pyhton" ,"c++", "python", "javascript","java", "python"
}
print(len(subjects))

#marks

marks = {}
x = int(input("enter phy : "))
marks.update({"phy" : x})

x = int(input("enter math : "))
marks.update({"math" : x})

x = int(input("enter chem: "))
marks.update({"chem" : x})

print(marks )