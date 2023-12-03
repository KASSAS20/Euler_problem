def pythagorean_triplet():
    for b in range(1, 1001):
        for a in range(1, b):
            c = (a**2+b**2)**0.5
            if ((a+b+c) == 1000):
                return int(a*b*c)
#31875000