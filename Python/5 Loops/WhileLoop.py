# count = 1
# while count <= 10000:
#     print("hello",count)
#     count += 1

#qs3
# n = int(input("Enter number : "))
# i=1
# while i <= 10:
#     print(n*i)
#     i +=1

#qs4
# nums=[1,4,9,16,25,36,49,64,81,100]

# idx =0
# while idx < len(nums):
#     print(nums[idx]) 
#     idx +=1

#qs5
nums=(1,4,9,16,25,36,49,64,81,100)
x=36
i=0
while i < len(nums):
    if(nums[i]==x):
        print("FOUND at idx", i)
    i+=1  

#break and continue    
i=0
while i<=5:
    if(i==3):
        i+=1
        continue #skip
    print(i)
    i += 1