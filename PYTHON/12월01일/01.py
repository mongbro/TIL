import turtle
import random

def draw(x, y):
    turtle.penup()
    r = random.random()
    g = random.random()
    b = random.random()
    turtle.color((r, g, b))
    turtle.goto(x, y)
    turtle.pendown()
    z = random.randrange(2, 10)
    for i in range (0, 8):
        turtle.pensize(z)
        turtle.forward(50)
        turtle.left(360/8)
    turtle.penup()

turtle.onscreenclick(draw)
