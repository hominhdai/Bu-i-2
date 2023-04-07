#include <iostream>
using namespace std;

// nguon : GPT

int multiSum(int arr[], int n) {
    if (n == 0) {  // truong hop co ban
        return 0;
    } else {  // truong hop de quy
        return arr[n-1] + multiSum(arr, n-1);
    }
}

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> arr[i];
    }

    int sum = multiSum(arr, n);
    cout << "Tong cac phan tu trong mang la " << sum << endl;

    return 0;
}
