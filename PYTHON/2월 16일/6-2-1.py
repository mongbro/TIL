from time import time
from random import *

start = time()
arr = []
for i in range(100):
    arr.append(randint(1, 100))

for i in range(1, len(arr)):
    for j in range(i, 0, -1):
        if arr[j] < arr[j - 1]:
            arr[j], arr[j - 1] = arr[j - 1], arr[j]
        else:
            break

end = time()
print(arr)
print(end - start)