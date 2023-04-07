#include <iostream>
using namespace std;

// nguon: GPT

int tailSum(int n, int sum) {
    if (n == 0) {  // truong hop co ban
        return sum;
    } else {  // truong hop de quy
        return tailSum(n-1, sum+n);
    }
}

int main() {
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;

    int sum = tailSum(n, 0);
    cout << "Tong cac so tu 1 den " << n << " la " << sum << endl;

    return 0;
}
