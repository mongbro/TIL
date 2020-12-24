import random

def genPass():
    s = "abcdefghijklmnopqrstuvwxyz0123456789"
    result = ""
    for i in range(6):
        index = random.randrange(len(s))
        result += s[index]
    return result


for i in range(5):
    print(genPass())