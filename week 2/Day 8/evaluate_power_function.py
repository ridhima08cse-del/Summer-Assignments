def power(base, exp):
    if exp == 0:
        return 1
    else:
        return base * power(base, exp - 1)

base = int(input("Enter the base: "))
exp = int(input("Enter the exponent: "))

print("Result =", power(base, exp))