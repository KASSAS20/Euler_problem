def summation_of_primes():
    result = int()
    for i in range(2, 2_000_000):
        for j in range(2, int((i**0.5))+1):
            if i % j == 0:
                break
        else:
            result+=i
    return result

summation_of_primes()
# 142913828922
