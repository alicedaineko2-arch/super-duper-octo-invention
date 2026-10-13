import random
length = 12
chars = "abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ"
password = ""
for i in range(length):
    password = password + choice(chars)
print("Password:")
print(password)