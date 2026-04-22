list1 = [1,2,3]
list2 = [2,3,3]

copy_list1= list1.copy()
copy_list1.reverse()

if(copy_list1 == list1):
    print("Palindrome")
else: 
    print("Not Palindrome")    