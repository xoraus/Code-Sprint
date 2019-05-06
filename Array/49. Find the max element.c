// to find the maximum element in the array which is first increasing andthen decraseting

#include<stdio.h>

// using linear search

int findMaximum(int arr[], int low, int high) {
    int max = arr[low];
    int i;
    for (i = 0; i < high; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

//binary search

int findMax(int arr[], int low, int high) {

    if(low==high)
        return arr[low];

    if ((high == low + 1) && arr[low] <= arr[high])
        return arr[high];

    if ((high == low + 1) && arr[low] >= arr[high])
        return arr[low];

    int mid = (low + high) / 2;

    if (arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1])
        return arr[mid];

    if (arr[mid] > arr[mid+1] && arr[mid] < arr[mid-1])
        return findMax(arr, low, mid - 1);
    else
        return findMax(arr, mid + 1, high);

}

time complexity : O(Longn)