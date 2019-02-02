#include<stdio.h>
#include<math.h>
#include<limits.h>

void quickSort(int *, int, int);

void minAbsSumPair(int arr[], int n) {
    // variables to keep track of the current maximum and
    // current minimum
    int sum, min_sum = INT_MAX;

    // left ad right sub-array indexes

    int l = 0, r = n - 1;

    // variables to keep track of the left and the right minimum
    int min_l = l, min_r = n-1;

    // array have atleat two elements

    if(n<2) {
        printf("Invalid input");
        return;
    }

    quickSort(arr, l, r);

    while(l<r) {
        sum = arr[l] + arr[r];
// if abs sum is less then update the result
    if(abs(sum) < abs(min_sum)) {
        min_sum = sum;
        min_l = l;
        min_r = r;
    }
    if(sum<0)
        l++;
        else
            r--;
    }
    printf("The two elements whose sum is minimum are %d and %d", arr[min_l], arr[min_r]);
}

int main() {
    int arr[] = {1, 60, -10, 70, -80, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
    minAbsSumPair(arr, n);
    return 0;
}