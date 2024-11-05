function bubble_sort(x::Vector{T}) where T <: Real
    n = length(x)
    for i in 1:(n - 1)
        for j in 1:(n - i)
            if x[j] > x[j + 1]
                # 交换元素
                x[j], x[j + 1] = x[j + 1], x[j]
            end
        end
    end
    return x
end

# 测试示例
x = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]
sorted_x = bubble_sort(x)
println(sorted_x)