# Program: Swap Two Numbers

num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

print("\nBefore Swapping:")
print("First Number =", num1)
print("Second Number =", num2)

temp = num1
num1 = num2
num2 = temp

print("\nAfter Swapping:")
print("First Number =", num1)
print("Second Number =", num2)