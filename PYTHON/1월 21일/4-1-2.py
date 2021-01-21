n = int(input())
x, y = 1, 1
moves = input().split()

dx = [0, 0, -1, 1]
dy = [-1, 1, 0, 0]
di = ['L', 'R', 'U', 'D']

for move in moves:
    for i in range (len(di)):
        if move == di[i]:
            nx = x + dx[i]
            ny = y + dy[i]
    if nx < 1 or nx > n or ny < 1 or ny > n:
        continue
    x, y = nx, ny

print(x, y)