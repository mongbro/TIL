loc = input()
count = 0
row = int(loc[1])                                 # 1, 2, 3, 4, 5, 6, 7, 8
col = int(ord(loc[0]) - int(ord('a'))) + 1        # a, b, c, d, e, f, g, h
      # 알파벳 하나의 코드 - a의 코드 + 1 ===> a == 1, b == 2, c == 3...

moves = [(-2, -1), (-2, 1), (2, -1), (2, 1), (-1, -2), (-1, 2), (1, -2), (1, 2)]

for move in moves:
    nrow = row + move[1]
    ncol = col + move[0]
    if nrow < 1 or nrow > 8 or ncol < 1 or ncol > 8:
        continue
    count += 1

print(count)