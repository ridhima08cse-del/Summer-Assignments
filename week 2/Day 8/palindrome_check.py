def palindrome(s):
    if len(s) <= 1:
        return True
    if s[0] == s[-1]:
        return palindrome(s[1:-1])
    else:
        return False

text = input("Enter a string: ")

if palindrome(text):
    print("Palindrome")
else:
    print("Not a Palindrome")