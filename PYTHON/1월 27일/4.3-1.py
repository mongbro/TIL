n, m = map(int, input().split())
visit = [[0] * m for _ in range(n)]
x, y, di = map(int, input().split())
visit[x][y] = 1
array = []
for i in range(n):
    array.append(list(map(int, input().split())))

dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

def turn_left():
    global di
    di -= 1
    if di == -1:
        di = 3

count = 1
turn_count = 0

while True:
    turn_left()
    nx = x + dx[di]
    ny = y + dy[di]
    if array[nx][ny] == 0 and visit[nx][ny] == 0:
        x, y = nx, ny
        visit[x][y] = 1
        count += 1
        turn_count = 0
        continue
    else:
        turn_count += 1
    if turn_count == 4:
        nx = x - dx[di]
        ny = y - dy[di]
        if array[nx][ny] == 0:
            x, y = nx, ny
            turn_count = 0
            continue
        else:
            break

print(count)