collection = {1,2,3,4,5, "rauf", "then", "rauf", 5}#ignore duplicate value
# set - mutable
# set - element - immutable

print(collection)
print(type(collection))

#set methods

#set.add().remove().clear().pop()
group = set()
group.add(1)
group.add(2)
group.add(3)
group.add((2,3,4,5))
group.add("apnacoellge")
 
group.remove(3)
group.clear()

print(group)

subject = {"english" ,"hindi", "math", "science", "pyhton"}

print(subject.pop())
print(subject.pop())

#set. union intersection
set1 ={1,2,3,4}
set2={2,3,7,5}
print(set1.union(set2))
print(set1.intersection(set2))