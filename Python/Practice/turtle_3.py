from turtle import *

ht()  # Hide turtle
speed(0)  # Max speed
bgcolor("black")

for i in range(200):
    color("orange")
    circle(200 - i)
    lt(60)  # Left turn by 60 degrees

done()