#include<iostream>
using namespace std;

void printArray(int arr[], int n);
int gcd(int a, int b);


int leftRotate(int arr[], int d, int n) {
    int j,k, temp;

    for (int i = 0; i < gcd(d, n); i++) {
        // move i-th value of the blockes
        temp = arr[i];
        j = i;
        while(1) {
            k = j + d;
            if(k >= n)
                k = k - n;
            if (k==i)
                break;
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

int gcd(int a, int b) {
    if(b==0)
        return a;
    else
        return gcd(b, a % b);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    leftRotate(arr, 2, 7);
    printArray(arr, 7);
    return 0;
}