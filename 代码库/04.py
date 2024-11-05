def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

primes = []
for i in range(1, 101):
    if is_prime(i):
        primes.append(i)
print(primes)