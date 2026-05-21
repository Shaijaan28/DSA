nums =[1,2,3,4,5]

for val in nums:
    print(val)

str = "shaijaanrauf"
for char in str:
    print(char)
else:
    print("END")   

list =[1,2,3,4,5,6,7,8] 
for el in list:
    print(el)


#range 
seq = range(5)

for i in seq:
    print(i)

for i in range(2,10): #range(start,stop)
    print(i)

for i in range(2,10,2): #range(start,stop,step)
    print(i)    

# sum to n
n =5

sum =0
for i in range(1,n+1):
    sum +=i
print("total sum = ",sum)
