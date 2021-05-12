def findSum(arr, start, end):
    sum = 0
    for i in range(start, end + 1):
        sum += arr[i]
    return sum

def printMaxSumIS(arr, n, L):
    result = []
    compare = []
    for i in range(n):      # target = i
        for j in range(i + 1):
            for k in range(i, n):
                compare.append(findSum(arr, j, k))
        result.append(max(compare))
        compare.clear()
    return result

arr = [-1, 2, 0, -3, 2]
n = len(arr)
L = [[] for i in range(n)]
result = []
result = printMaxSumIS(arr, n, L)

print(result)