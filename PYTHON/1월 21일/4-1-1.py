n = int(input())
x, y = 1, 1
moves = input().split()          # input.split 하면 split 된 것들이 list 로 저장된다.

dx = [0, 0, -1, 1]               # dx와 dy의 한 열을 하나의 방향으로 생각한다.
dy = [-1, 1, 0, 0]               # 예를 들어 'L'은 [0, -1], 'D'는 [1, 0] 이다.
di = ['L', 'R', 'U', 'D']

for move in moves:
    for i in range(len(di)):
        if move == di[i]:
            nx = x + dx[i]
            ny = y + dy[i]
    if nx < 1 or nx > n or ny < 1 or ny > n:
        continue
    x, y = nx, ny

print(x, y)