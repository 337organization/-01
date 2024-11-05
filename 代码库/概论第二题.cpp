#include <iostream>
#include <vector>
using namespace std;
// 冒泡排序算法实现
void bubbleSort(vector<double>&  arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++
            ) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
            }
    }
}

int main() {
    vector<double> x = {1, 3.5, 2.7, 6, 4.8};

    // 调用冒泡排序函数
    bubbleSort(x);

    // 输出排序后的向量
    for (double  num:x) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
//
// Created by 34365 on 2024/11/5.
//
