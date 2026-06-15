#WAFn to cal length of list
cities = ["goa","mao","dhanbad","bokaro","ranchi"]
age = ["23","33","32","45"]

def print_len(list):
    print(len(list))

print_len(cities)
print_len(age)

#WAFn to print the elements of a list in a single line
def print_list(list):
    for item in list:
        print(item, end=" ")

#print_list(age)

#WAFn to print factorial of n
def cal_factorial(n):
    fact =1
    for i in range(1,n+1):
        fact *=i
    print (fact)
        
    
cal_factorial(5)

#WAF to cal USD to INR
def converUSDtoINR(usd):
    inr = 94 * usd
    print (usd,"USD =", inr, "INR")

converUSDtoINR(24)    