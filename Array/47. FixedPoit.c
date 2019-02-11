#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int arr[], int low, int high) {
    if(high >= low) {
        int mid = (low + high) / 2;
        if(mid == arr[mid])
            return mid;
        if(mid > arr[mid])
            return BinarySearch(arr, (mid + 1), high);
        else
            return BinarySearch(arr, low, (mid - 1));

    }
    return -1;
}

int main() {
    int arr[] = {-10, -1, 2 ,3, 10, 11, 30, 50, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Fixed point is %d", BinarySearch(arr, 0, n-1));
    getchar();
    return 0;
}