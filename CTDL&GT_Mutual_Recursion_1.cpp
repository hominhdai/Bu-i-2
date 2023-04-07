// nguon : GPT

int recursiveBinarySearch(int arr[], int low, int high, int x) {
    if (low > high) {  // truong hop co ban
        return -1;
    }

    int mid = (low + high) / 2;

    if (arr[mid] == x) {  // truong hop co ban
        return mid;
    } else if (x < arr[mid]) {  // truong hop de quy
        return recursiveBinarySearch(arr, low, mid-1, x);
    } else {  // truong hop de quy
        return recursiveBinarySearch(arr, mid+1, high, x);
    }
}
