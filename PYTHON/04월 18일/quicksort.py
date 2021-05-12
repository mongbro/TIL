import random, timeit

def quick_sort(A, first, last):
    p = A[first]
    left = first + 1
    right = last
    while left <= right:
        while left <= last and A[left] < p:
            left += 1
        while A[right] > p:
            right -= 1
        if left <= right:
            A[left], A[right] = [right], A[left]
            left += 1
            right -= 1
    A[first], A[right] = A[right], A[first]
    quick_sort(A, first, right - 1)
    quick_sort(A, left, last)

A = []
for i in range(10):
    A.append(random.randint(1, 50))

quick_sort(A, 0, len(A) - 1)
print(A)