n = int(input("Enter number of elements: "))

arr = []

for i in range(n):
    arr.append(int(input("Enter element: ")))

total = 0

for i in arr:
    total += i

print("Sum =", total)