// nguon: GPT

int tailSum(int n, int sum) {
    if (n == 0) {  // truong hop co ban
        return sum;
    } else {  // truong hop de quy
        return tailSum(n-1, sum+n);
    }
}
