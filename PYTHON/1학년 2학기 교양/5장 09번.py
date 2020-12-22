import random

num_a=random.randrange(1,6)
print("A의 주사위 숫자는 %d"%num_a)

num_b=random.randrange(1,6)
print("B의 주사위 숫자는 %d"%num_b)


if num_a>num_b:
    print("A가 이김")
elif num_b>num_a:
    print("B가 이김")
else:
    print("비김")
