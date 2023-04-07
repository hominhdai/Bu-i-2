#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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

    insertionSort(arr, n);

    cout << "Mang sau khi sap xep: ";
    xuatMang(arr, n);

    return 0;
}

