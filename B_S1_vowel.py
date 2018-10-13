import string
ch=input()
l=['a','e','i','o','u']
s=string.punctuation
if ch in l:
    print("Vowel")
elif ch in s:
    print("invalid")
else:
    print("Consonant")
