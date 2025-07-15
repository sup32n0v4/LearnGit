import os
import sys
if __name__ == "__main__":
    print("Python version: ", sys.version)
print("Path :", os.getcwd())
print("Hello, World!")
name = input("Enter your name: ")
print(f"Hello, {name}! Have a nice day!")