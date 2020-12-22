import random
num_a=random.randrange(1,6)
print("A : %d"%num_a)
num_b=random.randrange(1,6)
print("B : %d"%num_b)

if num_a>num_b:
    print("A win")
elif num_a<num_b:
    print("B win")
else:
    print("draw")
