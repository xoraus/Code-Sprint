#include<stdio.h>

// function to swap a and b
void swap(int *a, int *b);

// sort the input array , the array is assumed to have values {0, 1,2 };

void sort012(int arr[], int size) {
    int lo = 0;
    int hi = size - 1;
    int mid = 0;

    while(mid <= hi) {
        switch (arr[mid]) {
            case 0:
                swap(&arr[lo++], &arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(&arr[mid], &arr[hi--]);
                break;
                }
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[], int arr_size) {
    int i = 0;
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int i;

    sort012(arr, arr_size);

    printf("array after segregation ");
    printArray(arr, arr_size);

    getchar();
    return 0;
}