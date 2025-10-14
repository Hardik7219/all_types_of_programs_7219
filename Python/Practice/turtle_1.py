from turtle import *
import colorsys

bgcolor("black")
tracer(500)

def draw():
    h = 0
    for i in range(75):
        c = colorsys.hsv_to_rgb(h, 1, 1)
        h += 0.01  # small increment for smooth color transition

        up()
        goto(0, 0)
        down()

        color('black')
        fillcolor(c)
        begin_fill()

        rt(98)
        circle(i, 12)
        fd(290)
        fd(i)
        lt(29)  # probably meant to turn left

        for j in range(129):
            fd(i)
            circle(j, 299, steps=2)

        end_fill()

draw()
done()