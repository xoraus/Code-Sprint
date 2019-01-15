#include<iostream>

using namespace std;

int max(int, int);
int min(int, int);
int median(int[], int); // to get the median of a sorted array

// the following function returns the medians of the arrays

int getMedian(int ar1[], int ar2[], int n) {

    int m1; // 1st median
    int m2; // 2nd median

    if(n<=0)
        return -1;

    if (n==1)
        return (ar1[0] + ar2[0]) / 2;

    if (n==2)
        return (max(ar1[0], ar2[0]) + min(ar1[1], ar2[1]));

    m1 = median(ar1, n); // get the median of the first array
    m2 = median(ar2, n); // get the median of the 2nd array


}

// function to get the median of the array
int median(int arr[], int n) {
    if(n%2 == 0)
        return (arr[n / 2] + arr[n-1 / 2]) / 2;
    else
        return (arr[n / 2]);
}

int main() {
    int ar1[] = {1, 2, 3, 6};
    int ar2[] = {4, 6, 8, 10};
    int n1 = sizeof(ar1) / sizeof(ar1[0]);
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    if(n1==n2)
        cout << "Mdedian is %d" << getMedian(ar1, ar2, n1);
        else
            cout << "Doesn't work for array of unequal sizes";


}


