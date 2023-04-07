#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;
}

void nhapMang(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Nhap gia tri arr[" << i << "]: ";
        cin >> arr[i];
    }
}

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int arr[n];

    nhapMang(arr, n);

    int x;
    cout << "Nhap gia tri can tim: ";
    cin >> x;

    int result = linearSearch(arr, n, x);
    if(result == -1) {
        cout << "Khong tim thay " << x << " trong mang.\n";
    }
    else {
        cout << "Tim thay " << x << " tai vi tri " << result << ".\n";
    }

    return 0;
}
