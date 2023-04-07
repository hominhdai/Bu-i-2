 int linearSum(int n) {
    if (n == 1) {  // truong hop co ban
        return 1;
    } else {  // truong hop de quy
        return n + linearSum(n-1);
    }
}
nguon :GPT
