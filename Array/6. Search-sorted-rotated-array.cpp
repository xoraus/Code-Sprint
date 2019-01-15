#include<iostream>
using namespace std;

int search(int arr[], int l, int h, int key) {

    if (l > h)
        return -1;
    int mid = (l + h) / 2;
    if(arr[mid] == key)
        return mid;

    // if arr[l...mid] is sorted
    if(arr[l] <= arr[mid]) {
        if(key >= arr[l] && key <= arr[mid])
            return search(arr, l, mid - 1, key);
    }

        if(key>=arr[mid] && key<= arr[h]) {
            return search(arr, mid + 1, h, key);
    }
}

int main(int argc, char const *argv[]) {
    int arr[] = {4, 5, 6, 7, 8, 9, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 6;
    int i = search(arr, 0,n-1, key);
    return 0;
}
