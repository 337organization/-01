x = [1, 3.5, 2.7, 6, 4.8]
n = len(x)
for i in range(n - 1):
    for j in range(i + 1, n):
        if x[i] > x[j]:
            x[i], x[j] = x[j], x[i]
print(x)