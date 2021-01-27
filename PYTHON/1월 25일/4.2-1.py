loc = input()
count = 0
row = int(loc[1])
col = int(ord(loc[0]) - int(ord('a'))) + 1
moves = [(-2, -1), (-2, 1), (2, -1), (2, 1), (-1, -2), (-1, 2), (1, -2), (1, 2)]

for move in moves:
    nrow = row + move[1]
    ncol = col + move[0]
    if nrow < 1 or nrow > 8 or ncol < 1 or ncol > 8:
        continue
    count += 1

print(count)