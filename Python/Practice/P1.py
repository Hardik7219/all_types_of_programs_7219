import time
import os

# first
# cols={(0,0):' '}


def show(height, width):
    cols = {}
 # i=height
 # j=width
    for i in range(0, height*2):
        for j in range(0, width*2):
            if j == 0 or j == width*2-1 or i == 0 or i == height*2-1:
                print("*", end="")
                cols[(i, j)] = "*"
            else:
                print(" ", end="")
                cols[(i, j)] = " "
        time.sleep(0.007)

    print(" ")

    time.sleep(0.007)

# second

    for i in range(0, height*2):
        for j in range(0, width*2):
            print(cols[(i, j)], end="")
        print(" ")


show(5, 5)
