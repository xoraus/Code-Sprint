#include<iostream>
using namespace std;

// return true if there is the triplet in the array

bool isTriplet(int ar[], int n) {

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n;k ++){
                int x = ar[i] * ar[i], y = ar[j] * ar[j], z = ar[k] * ar[k];
                if(x==y+z|| y == x+z || z == x+y)
                    return true;
            }
        }
    }
}

int main(){
    int ar[] = {3, 1, 4, 6, 5};
    int arr_size = sizeof(arr_size) / sizeof(arr_size[0]);
    isTriplet(ar, arr_size);
    return 0;
}

// an optimized function o(n2)

bool isTriplet(int arr[], int n) {
    for (int i = 0; i < n;i++)
        arr[i] = arr[i] * arr[i];

    // sort the array elements
    sort(arr, arr + n);

    // now fix the one element one by
    for (int i = n - 1; i >= 2; i--) {
        int l = 0;
        int r = i - 1;
        while(l<r){
            if(arr[l] + arr[r] == arr[i])
                return true;
                // else move l or r
            (arr[l] + arr[r] == arr[i]) ? l++ : r--;
        }
    }
    return false;
}