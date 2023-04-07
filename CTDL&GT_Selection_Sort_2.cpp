#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void nhapMang(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Nhap gia tri arr[" << i << "]: ";
        cin >> arr[i];
    }
}

void xuatMang(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int arr[n];

    nhapMang(arr, n);

    cout << "Mang truoc khi sap xep: ";
    xuatMang(arr, n);

    selectionSort(arr, n);

    cout << "Mang sau khi sap xep: ";
    xuatMang(arr, n);

    return 0;
}
