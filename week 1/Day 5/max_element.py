n = int(input("Enter number of elements: "))

arr = []

for i in range(n):
    arr.append(int(input("Enter element: ")))

maximum = arr[0]

for i in arr:
    if i > maximum:
        maximum = i

print("Maximum element =", maximum)