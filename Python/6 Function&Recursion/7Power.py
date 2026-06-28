def power(b, n):
    if n == 0:
        return 1
    return b * power(b, n - 1)

base = int(input("Enter the base: "))
exp = int(input("Enter the exponent: "))

print("Result =", power(base, exp))