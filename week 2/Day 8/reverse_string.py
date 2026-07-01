def reverse(s):
    if s == "":
        return ""
    else:
        return reverse(s[1:]) + s[0]

text = input("Enter a string: ")

print("Reversed string:", reverse(text))