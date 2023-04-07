#include <iostream>
using namespace std;

// nguon : GPT

int recursiveBinarySearch(int arr[], int low, int high, int x) {
    if (low > high) {  // tru?ng h?p co b?n
        return -1;
    }

    int mid = (low + high) / 2;

    if (arr[mid] == x) {  // tru?ng h?p co b?n
        return mid;
    } else if (x < arr[mid]) {  // tru?ng h?p d? quy
        return recursiveBinarySearch(arr, low, mid-1, x);
    } else {  // tru?ng h?p d? quy
        return recursiveBinarySearch(arr, mid+1, high, x);
    }
}

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int arr[n];
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Nhap phan tu can tim: ";
    cin >> x;

    int index = recursiveBinarySearch(arr, 0, n-1, x);

    if (index == -1) {
        cout << "Phan tu " << x << " khong ton tai trong mang" << endl;
    } else {
        cout << "Phan tu " << x << " co vi tri index = " << index << endl;
    }

    return 0;
}
