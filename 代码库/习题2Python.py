x = [1, 3.5, 2.7, 6, 4.8]
 for i in range(len(x)):
         for j in range(0, len(x) - i - 1):
           if x[j] > x[j + 1] :
           x[j], x[j + 1] = x[j + 1], x[j]
 print("排序后的向量x为：", x)
