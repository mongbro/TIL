import keyboard
import time

while True:
    try:
        if keyboard.is_pressed('1'):
            print("1")
        if keyboard.is_pressed('3'):
            print("3")
        if keyboard.is_pressed('2'):
            print("2")
    except:
        pass