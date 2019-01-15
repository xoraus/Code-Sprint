#include<iostream>
using namespace std;
#define NA -1

void moveToEnd(int mPlusN[], int size) {
    int i = 0;
    int j = size - 1;
    for (i = size - 1; j >= 0;j--) {
        if(mPlusN[i] !=NA) {
            mPlusN[j] = mPlusN[i];
            j--;
        }
    }
}

int merge(int mPlusN[], int N[], int m, int n) {
    int i = n; // current index of the input part of the mPlusN[]
    int j = 0; // current index of the N[]
    int k = 0; // current indexof the o/p array;

    while(k<(m+n)) {
        if(( i < (m+n) && mPlusN[i] <=N[j]) || (j==n)) {
            mPlusN[k] = mPlusN[i];
            k++;
            i++;
        }
        else {
            mPlusN[k] = N[j];
            k++;
            j++;
        }
    }
}

void printArray(int mPlusN[], int size) {
    for (int i = 0; i < size;i++)
        cout << mPlusN[i] << endl;
}

int main() {
    int mPlusN[] = {2, 8, NA, NA, NA, 13, NA, 15, 20};
    int N[] = {5, 7, 9, 25};
    int n = sizeof(mPlusN) / sizeof(mPlusN[0]);
    int m = sizeof(N) / sizeof(N[0]);

// move the m elements at the end of mPlusN
    moveToEnd(mPlusN, m + n);

// merege N[] into mPlusN
    merge(mPlusN, N, m + n);

// print the resultant array
    printArray(mPlusN, m + n);

    return 0;
}
