arr = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]
arr2 = []

for i in range(len(arr)):
    arr2.append(min(arr))
    arr.remove(min(arr))

print(arr2)