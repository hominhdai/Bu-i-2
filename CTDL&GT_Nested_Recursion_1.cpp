// nguon : GPT

int fibonacci(int n) {
    if (n == 0 || n == 1) {  // tru?ng h?p co b?n
        return n;
    } else {  // tru?ng h?p d? quy
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int nestedSum(int n) {
    if (n == 0) {  // tru?ng h?p co b?n
        return 0;
    } else {  // tru?ng h?p d? quy
        return fibonacci(n) + nestedSum(n-1);
    }
}
