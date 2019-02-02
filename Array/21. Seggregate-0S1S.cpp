#include<iostream>
using namespace std;

int seggregate0and1(int arr[], int size) {
    int type0 = 0;
    int type1 = size - 1;

    while(type0 < type1) {
        if(arr[type0] == 1 ) {
            swap(arr[type0], arr[type1]);
            type1--;
        }
        else {
            type0++;
        }
    }
}

int main() {
    int arr[] = {0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1};
    int i, arr_size = sizeof(arr) / sizeof(arr[0]);
    seggregate0and1(arr, arr_size);
    cout << "Array after seggregation: ";
    for (int i = 0; i < arr_size;i++) {
        cout << arr[i]<<" ";
    }
    return 0;
}