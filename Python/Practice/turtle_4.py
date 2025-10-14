from turtle import *
import colorsys

speed(0)
bgcolor("black")

h = 0  # Initial hue

# Outer loop for 16 repetitions
for i in range(16):

    # Inner loop for drawing 18 shapes
    for j in range(18):
        c = colorsys.hsv_to_rgb(h, 1, 1)  # Convert HSV to RGB
        color(c)

        h += 0.005  # Gradually change color

        right(90)
        circle(150 - j * 6, 90)
        left(90)
        circle(150 - j * 6, 90)
        right(180)
        circle(40, 24)

done()  # Complete the drawing