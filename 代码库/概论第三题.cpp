//
// Created by 34365 on 2024/11/5.
//
#include <vector>
using namespace std;
vector<int> bubbleSort(const vector<int>& x) {
    vector<int> sorted_x = x; // 复制原向量
    int n = sorted_x.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (sorted_x[j] > sorted_x[j + 1]) {
                swap(sorted_x[j], sorted_x[j + 1]); // 交换元素
            }
        }
    }
    return sorted_x;
}


