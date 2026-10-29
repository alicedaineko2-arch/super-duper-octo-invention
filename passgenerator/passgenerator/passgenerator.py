import random
import string

chars = string.ascii_letters + string.digits
password = ""

for i in range(16):
    password += random.choice(chars)

print(password)