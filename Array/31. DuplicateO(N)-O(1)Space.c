#include<stdio.h>
#include<stdlib.h>

// this method doesn't work for 0s (zeroes)

void printRepeating(int arr[], int n) {
    int i = 0;
    printf("the print the repeating elements are ");
    for (i = 0; i < n; i++){
        if(arr[abs(arr[i])] >= 0)
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        else
            printf("%d ", abs(arr[i]));
    }
}

int main() {
    int arr[] = {1, 2, 3, 1, 3, 6, 6};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    printRepeating(arr, arr_size);
    getchar();
    return 0;
}