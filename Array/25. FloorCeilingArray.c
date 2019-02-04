// instead of using the linear search, binary search is used here to find
// out the index. Bonary search reduces the comp to O(Logn)

#include<stdio.h>


// function to get the index of ceiling of x in arr[low..high]

int ceilSearch(int arr[], int low, int high, int x) {
    int mid;
    // if x is smaller than or equal to the first element
    // then return the first element

    if(x <= arr[low])
        return low;

    //if x is greater than the last element then return the
    // last elemnt
    if(x > arr[high])
        return -1;

    // get the index of the middle element of the array

    mid = (low + high) / 2;

    // if x is same as the middle element then return the middle elements

    if(arr[mid] == x )
        return mid;

    // if x is greater than arr[mid], then either arr[mid+1]
    // is the ceiling of x or ceiling lies in the arr[mid+1...high]

    else if(arr[mid] < x) {
        if(mid+1 <= high && x <= arr[mid+1])
            return mid + 1;
        else {
            return ceilSearch(arr, mid + 1, high, x);
        }
    }

    else {
        if(mid -1 >= low && x > arr[mid-1])
            return mid;
        else {
            return ceilSearch(arr, low, mid - 1, x);
        }
    }
}

int main() {
    int arr[] = {1, 2, 8, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    int index = ceilSearch(arr, 0, n - 1, x);
    if(index == -1)
        printf("Ceiling of %d does not exist in the array", x);
    else
        printf("Ceiling of %d is %d", x, arr[index]);
    getchar();
    return 0;
}