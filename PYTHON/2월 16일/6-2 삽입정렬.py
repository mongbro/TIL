from time import time
from random import *

start = time()
arr = []
for i in range(100):
    arr.append(randint(1, 100))

def switch(arr, v):
    for i in range(1, v):
        if arr[i - 1] > arr[i]:
            arr[i - 1], arr[i] = arr[i], arr[i - 1]
            switch(arr, v - 1)

switch(arr, len(arr))
end = time()
print(arr)
print(end - start)