#include <iostream>
#include <algorithm> // Thu vi?n cho hàm sort()
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
    if(right >= left) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == x) {
            return mid;
        }
        if(arr[mid] > x) {
            return binarySearch(arr, left, mid - 1, x);
        }
        return binarySearch(arr, mid + 1, right, x);
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
    // S?p x?p m?ng tru?c khi tìm ki?m nh? phân
    sort(arr, arr+n);

    int x;
    cout << "Nhap gia tri can tim: ";
    cin >> x;

    int result = binarySearch(arr, 0, n-1, x);
    if(result == -1) {
        cout << "Khong tim thay " << x << " trong mang.\n";
    }
    else {
        cout << "Tim thay " << x << " tai vi tri " << result << ".\n";
    }

    return 0;
}
