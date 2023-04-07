#include <iostream>
using namespace std;

// nguon : GPT

int fibonacci(int n) {
    if (n == 0 || n == 1) {  // tru?ng h?p co b?n
        return n;
    } else {  // tru?ng h?p d? quy
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int nestedSum(int n) {
    if (n == 0) {  // tru?ng h?p co b?n
        return 0;
    } else {  // tru?ng h?p d? quy
        return fibonacci(n) + nestedSum(n-1);
    }
}

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    int sum = nestedSum(n);
    cout << "Tong cac so Fibonacci den so thu " << n << " la " << sum << endl;

    return 0;
}
