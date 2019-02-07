#include<stdio.h>

int equilibrium(int arr[], int size) {
    int sum = 0;
    int leftsum = 0;
    int i = 0;

    // find the sum of the whole array
    for (i = 0; i < size; i++)
        sum += arr[i];

    for (i = 0; i < size; i++) {
        sum -= arr[i]; // sum is now right for index i

        if(leftsum == sum)
            return i;

        leftsum += arr[i];
    }

    // if no equilibrium index found, then return 0
    return -1;
}

int main() {
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int arr_size = sizeof(arr) / sizeod(arr[0]);
    printf("The first quilibrium index is %d", equilibrium(arr,arr_size));
    getchar();
    return 0;
}