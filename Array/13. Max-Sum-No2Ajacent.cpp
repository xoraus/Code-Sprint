#include<iostream>

using namespace std;

int FindMax(int arr[], int n) {
    int incl = arr[0];
    int excl = 0;
    int excl_new;

    for (int i = 1; i < n; i++) {
        // current max including i
        excl_new = (incl > excl) ? incl : excl;

        // current max including i
        incl = excl + arr[i];
        excl = excl_new;
    }

    // return the max of incl and excl
    return ((incl > excl) ? incl : excl);
}

int main(int argc, char const *argv[]) {
    int arr[] = {5, 5, 10, 100, 10, 5};
    cout <<"The maximum number is - " <<FindMax(arr, 6);
    return 0;
}


