def sort_vector(x):
    n = len(x)
    for i in range(n - 1):
        for j in range(i + 1, n):
            if x[i] > x[j]:
                x[i], x[j] = x[j], x[i]
    return x
x = [1, 3.5, 2.7, 6, 4.8]
sorted_x = sort_vector(x)
print(sorted_x)