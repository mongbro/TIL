n = int(input())
moves = input().split()

di = ['L', 'R', 'U', 'D']
dx = [0, 0, -1, 1]
dy = [-1, 1, 0, 0]

x, y = 1, 1

for move in moves:
    for i in range(len(di)):
        if di[i] == move:
            nx = x + dx[i]
            ny = y + dy[i]
    if nx < 1 or nx > n or ny < 1 or ny > n:
        continue
    x = nx
    y = ny

print(x, y)