#include<stdio.h>

int BinarySearch(int arr[], int low, high) {
    if(high >= low) {
        int mid = (low + high) / 2;
        if(mid == arr[i])
            return mid;
        if(mid > arr[i])
            return BinarySearch(arr, (mid + 1), high);
        else {
            return BinarySearch(arr, low, (mid - 1));
        }
    }
    return -1;
}

int main() {
    int arr[] = {-10, -1, ,0 ,3, 10, 11, 30, 50, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Fixed point is %d", BinarySearch(arr, 0. n-1));
    getchar();
    return 0;
}