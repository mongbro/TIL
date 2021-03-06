from turtle import *
import random

setup(1600, 900)

score1 = 0
score2 = 0

t1 = Turtle()
t2 = Turtle()
t1.shape('turtle')
t2.shape('turtle')
t1.color('blue')
t1.fillcolor('blue')
t2.color('red')
t2.fillcolor('red')
t1.speed(100)
t2.speed(100)

for i in range(9):
    t1.penup()
    t1.goto(-700, 100)
    t1.pendown()
    t2.penup()
    t2.goto(-700, -100)
    t2.pendown()

    dis1 = 0
    dis2 = 0

    for j in range(200):
        num1 = random.randint(1, 10)
        num2 = random.randint(1, 10)
        dis1 += num1
        dis2 += num2
        t1.forward(num1)
        t2.forward(num2)

    if(dis1 > dis2):
        print('blue win')
        score1 += 1
    elif(dis1<dis2):
        print('red win')
        score2 += 1
    elif( dis1 == dis2):
        print('비김')
    t1.clear()
    t2.clear()

if(score1>score2):
    print('Total : blue win')
elif(score1 < score2):
    print('Total : red win')
