// nguon : GPT

int multiSum(int arr[], int n) {
    if (n == 0) {  // truong hop co ban
        return 0;
    } else {  // truong hop de quy
        return arr[n-1] + multiSum(arr, n-1);
    }
}
