x = [1, 3.5, 2.7, 6, 4.8]  # 首先，计算向量 x 所有元素的总和
sum_of_x = 0
for num in x:
    sum_of_x += num         # 然后，用总和除以元素的个数，得到平均数
average_of_x = sum_of_x / len(x)
print(average_of_x)
