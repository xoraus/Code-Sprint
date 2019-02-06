#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void productArray(int arr[], int n) {
    int i, temp = 1;

    int *prod = (int *)malloc(sizeof(int) * n);

    memset(prod, 1, n);

    for (i = 0; i < n;i++) {
        prod[i] = temp;
        temp *= arr[i];
    }

    temp = 1;

    for (i = n - 1; i >= 0; i--) {
        prod[i] = temp;
        temp *= arr[i];
    }

    for (i = 0; i < n; i++)
        printf("%d, ", prod[i]);

    return;
}

int main(){
    int arr[] = {10, 3, 5, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\nThe product array is: \n");
    productArray(arr, n);
    getchar();
    return 0;
}