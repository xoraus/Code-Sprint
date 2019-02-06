#include<stdio.h>

void swap(int *a, int *b);

void segregateEvenOdd(int arr[], int size) {
    int left = 0, right = size - 1;

    while(left<right) {
        // increment the left index while we see 0 at the left
        while(arr[left]%2==0 && left < right)
            left++;
        // decrement the right index while we see 1 at the right
        while(arr[right]%2 == 1 && left < right)
            right--;
        if(left < right) {
            // swap arr[left] and arr[right]
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[] = {12, 34, 45, 9, 8, 90, 3};
    int arr_size = 7, i = 0;

    segregateEvenOdd(arr, arr_size);

    printf("array after segregation ");
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
    getchar();
    return 0;
}