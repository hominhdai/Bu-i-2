#include <iostream>
using namespace std;

int linearSum(int n) {
    if (n == 1) {  // tru?ng h?p co b?n
        return 1;
    } else {  // tru?ng h?p d? quy
        return n + linearSum(n-1);
    }
}

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    int sum = linearSum(n);
    cout << "Tong cac so tu 1 den " << n << " la " << sum << endl;

    return 0;
}
