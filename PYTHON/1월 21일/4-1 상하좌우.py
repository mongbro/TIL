import string

n = int(input())
move = input().split()
len = len(move)
di = ['L', 'R', 'U', 'D']
cod = [1, 1]

for i in range(len):
    if move[i] == di[0]:
        if cod[1] != 1:
            cod[1] -= 1
    elif move[i] == di[1]:
        if cod[1] != n:
            cod[1] += 1
    elif move[i] == di[2]:
        if cod[0] != 1:
            cod[0] -= 1
    elif move[i] == di[3]:
        if cod[0] != n:
            cod[0] += 1

print(cod)