# pritn n to 0 using rec
def show(n):
    if(n==0): # base case
        return
    print(n)
    show(n-1)

show(10)    

# factorial using rec
def fact(n):
    if(n==0 or n==1):
        return 1
    else :
        return n * fact(n-1)
   
    
print(fact(6))   

#list
def print_list(list, idx):
    if(idx == len(list)):
        return
    print(list[idx])
    print_list(list,idx+1)

fruits = ["sjhd","uiwd","uh","suii"]    

#print_list(fruits)