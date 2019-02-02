#include <stdio.h>

int _mergeSort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid, int right);

// this function sorts the input array and returns the inversions

int mergeSort(int arr[], int size) {
    int *temp = (int *)malloc(sizeof(int) * size);
    return _mergeSort(arr, temp, 0, size - 1);
}

// auxiallary recursive function that sorts input array and returns the
// number of inversions in the array

int _mergeSort(int arr[], int temp[], int left, int right) {

    int mid, inv_count = 0;
    if(right > left) {
        mid = (right + left) / 2;

    // Inversion count will be the sum of the inversions in the leftpart
    // and the right part

        inv_count = _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);

     // merge the two parts

        inv_count += merge(arr, temp, left, mid +1, right);

    }

    return inv_count;
}

// this functions mergers the two sorted arrays and return the inversion
// counts in both the arrays

int merge(int arr[], int temp[], int left, int mid, int right) {

    int i, j, k;
    int inv_count = 0;

    i = left; // left array index
    j = mid + 1; // right array index
    k = left; // is the redultant merged subarray

    while((i<=mid) && (j<=right)) {
        if(arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
            // tricky part below
            inv_count = inv_count + (mid - 1);
        }
    }

    // if there are elements in the left subarray
    while(i<=mid-1)
        temp[k++] = arr[i++];

    // if there are elements in the right array
    while(j<=right)
        temp[k++] = arr[j++];


    //copy the merged elements back to the original array

    for (i = left; i <= right; i++){
        arr[i] = temp[i];
    }

    return inv_count;
}

int main()
{
    int arr[] = {1, 20, 6, 4, 5};
    printf("Number of inversions are %d", mergeSort(arr, 5));
    return 0;
}