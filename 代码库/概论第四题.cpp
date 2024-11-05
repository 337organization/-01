//
// Created by 34365 on 2024/11/5.
//
#include <iostream>
#include <cmath>

// 判断一个数是否为素数的函数
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
using namespace std;
int main01() {
    // 输出1到100之间的所有素数
    for (int i = 1; i <= 100; ++i) {
        if (isPrime(i)) {
            cout<< i << " ";
        }
    }
    cout << endl;
    return 0;
}
