import turtle
import time
import random


hiz = 0.15
print("control")
pencere = turtle.Screen()
pencere.title('Yılan Oyunu')
pencere.bgcolor('lightgreen')
pencere.setup(width=600, height=600)
pencere.tracer(0)

kafa = turtle.Turtle()
kafa.color('black')
kafa.shape('square')
kafa.speed(0)
kafa.goto(0, 100)
kafa.penup()
kafa.direction = 'stop'

yemek = turtle.Turtle()
yemek.shape('circle')
yemek.color('red')
yemek.speed(0)
yemek.penup()
yemek.goto(0, 0)
yemek.shapesize(0.80, 0.80)

kuyruklar = []


def move():
    if kafa.direction == 'up':
        y = kafa.ycor()
        kafa.sety(y + 20)
    if kafa.direction == 'down':
        y = kafa.ycor()
        kafa.sety(y - 20)
    if kafa.direction == 'right':
        x = kafa.xcor()
        kafa.setx(x + 20)
    if kafa.direction == 'left':
        x = kafa.xcor()
        kafa.setx(x - 20)


def goUp():
    if kafa.direction != 'down':
        kafa.direction = 'up'


def goDown():
    if kafa.direction != 'up':
        kafa.direction = 'down'


def goRight():
    if kafa.direction != 'left':
        kafa.direction = 'right'


def goLeft():
    if kafa.direction != 'right':
        kafa.direction = 'left'


pencere.listen()
pencere.onkey(goUp, 'Up')
pencere.onkey(goDown, 'Down')
pencere.onkey(goRight, 'Right')
pencere.onkey(goLeft, 'Left')
while True:
    pencere.update()
    
    if kafa.xcor() > 300 or kafa.xcor() < -300 or kafa.ycor() > 300 or kafa.ycor() < -300:
        time.sleep(1)
        kafa.goto(0, 0)
        kafa.direction = 'stop'

        for kuyruk in kuyruklar:
            kuyruk.goto(1000, -1000)

        kuyruklar = []

        hiz = 0.15

    if kafa.distance(yemek) < 20:
        x = random.randint(-250, 250)
        y = random.randint(-250, 250)
        yemek.goto(x, y)

        hiz = hiz - 0.001

        yenikuyruk = turtle.Turtle()
        yenikuyruk.speed(0)
        yenikuyruk.shape('square')
        yenikuyruk.color('white')
        yenikuyruk.penup()
        kuyruklar.append(yenikuyruk)

    for i in range(len(kuyruklar) - 1, 0, -1):
        x = kuyruklar[i - 1].xcor()
        y = kuyruklar[i - 1].ycor()
        kuyruklar[i].goto(x, y)

    if len(kuyruklar) > 0:
        x = kafa.xcor()
        y = kafa.ycor()
        kuyruklar[0].goto(x, y)

    move()
    time.sleep(hiz)
