#include <iostream>
using namespace std;

const int MAX = 100; // K�ch thu?c t?i da c?a stack

class Stack {
private:
    int top; // V? tr� ph?n t? d?u ti�n trong stack
    int a[MAX]; // M?ng ch?a c�c ph?n t? trong stack
public:
    Stack() { top = -1; } // Kh?i t?o stack v?i top = -1 (stack r?ng)

    bool isEmpty() { return top == -1; } // Ki?m tra stack c� r?ng kh�ng

    bool isFull() { return top == MAX - 1; } // Ki?m tra stack d� d?y chua

    bool push(int x) { // Th�m m?t ph?n t? v�o d?u stack
        if (isFull()) return false; // N?u stack d� d?y th� kh�ng th? th�m du?c
        a[++top] = x; // Th�m ph?n t? v�o v? tr� d?u ti�n c?a stack v� tang top l�n 1
        return true;
    }

    bool pop() { // X�a ph?n t? d?u ti�n kh?i stack
        if (isEmpty()) return false; // N?u stack r?ng th� kh�ng th? x�a du?c
        top--; // Gi?m top xu?ng 1 d? lo?i b? ph?n t? d?u ti�n kh?i stack
        return true;
    }

    int getTop() { // L?y gi� tr? ph?n t? d?u ti�n trong stack
        if (isEmpty()) return -1; // N?u stack r?ng th� kh�ng th? l?y du?c
        return a[top];
    }
};

int main() {
    int n, x;
    Stack s;

    cout << "Nhap so luong phan tu muon them vao stack: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Nhap gia tri phan tu thu " << i+1 << ": ";
        cin >> x;
        s.push(x);
    }

    cout << "Cac phan tu trong stack theo thu tu dao nguoc: ";
    while (!s.isEmpty()) {
        cout << s.getTop() << " ";
        s.pop();
    }

    return 0;
}
