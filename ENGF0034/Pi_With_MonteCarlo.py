import random

def PiApproxMC():
    inside = 0
    for i in range(1000000):
        x = random.random()
        y = random.random()
        if (x**2 + y**2) < 1:
            inside += 1
    pi = 4 * (inside/1000000)
    print(f"Pi: {pi}")
