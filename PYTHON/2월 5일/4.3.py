n, m = map(int, input().split())
visited = [[0] * m for _ in range(n)]
x, y, d = map(int, input().split())
arr = []

dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

for i in range(n):
    arr.append(list(map(int, input().split())))

def turn_left():
    global d
    d -= 1
    if d == -1:
        d = 3

count = 1
turn_count = 0

while True:
    turn_left()
    nx = x + dx[d]
    ny = y + dy[d]
    if arr[nx][ny] == 0 and visited[nx][ny] == 0:               # 땅 + 아직 방문 안함
        x, y = nx, ny
        visited[x][y] = 1
        count += 1
        turn_count = 0
        continue
    else:
        turn_count += 1
    if turn_count == 4:
        nx = x - dx[d]
        ny = y - dy[d]
        if arr[nx][ny] == 0:
            x, y = nx, ny
            turn_count = 0
            continue
        else:
            break

print(count)