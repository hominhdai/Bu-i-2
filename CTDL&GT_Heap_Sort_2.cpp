#include <iostream>
using namespace std;

// Hoan doi gia tri cua hai so nguyen a va b
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Chuyen vi tri node i cho den khi thoa man dieu kien heap
void heapify(int arr[], int n, int i) {
    int largest = i; // khoi tao largest la node i
    int l = 2 * i + 1; // vi tri cua node con ben trai
    int r = 2 * i + 2; // vi tri cua node con ben phai

    // Neu node con ben trai lon hon root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // Neu node con ben phai lon hon root
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // Neu largest khong phai la root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Thuc hien heapify cho subtree co chua largest
        heapify(arr, n, largest);
    }
}

// Ham sap xep mang su dung Heap Sort
void heapSort(int arr[], int n) {
    // Xay dung heap (sap xep mang)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Xoa cac phan tu mot luc mot tu heap
    for (int i = n - 1; i >= 0; i--) {
        // Di chuyen root (phan tu lon nhat) den cuoi cung cua mang
        swap(arr[0], arr[i]);

        // Goi ham heapify len root moi
        heapify(arr, i, 0);
    }
}

int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> arr[i];
    }

    heapSort(arr, n);

    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
