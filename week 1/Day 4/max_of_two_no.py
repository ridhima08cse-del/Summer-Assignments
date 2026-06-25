def find_max(a, b):
    if a > b:
        return a
    return b

num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

print("Maximum Number =", find_max(num1, num2))