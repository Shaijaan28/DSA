#function defination
def calc_sum(a,b): #parameter
    sum = a+b
    print (sum)
    return sum

def print_hello():
    print("hello")

calc_sum(3,4)
print_hello()

#avg of three num
def avg_ofThree(x,y,z):
    avg = (x+y+z)/3
    print(avg)
    return avg

avg_ofThree(3,4,5)

#default parameter
def cal_prod(a=1,b=2):
    print(a*b)
    return a* b
cal_prod()