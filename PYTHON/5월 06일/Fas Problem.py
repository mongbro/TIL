def sol(n, arr):
    marr = [[0] for i in range(100)]
    for i in arr:
        marr[0][i] += 1
    sum = 0
    for i in marr:
        if i % 2 == 0:
            sum += marr[0][i]
        else:
            sum += marr[0][i] - 1
    return sum / 2

n = int(input())
arr = list(map(int, input().split()))
print(sol(n, arr))

