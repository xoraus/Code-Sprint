#include<iostream>
using namespace std;

int maxSubArraySum(int a[], int n) {
    int max_so_far = 0;
    int max_ending_here = 0;

    for (int i = 0; i < n;i++){
        max_ending_here = max_ending_here + a[i];
        if(max_ending_here < 0)
            max_ending_here = 0;
        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}

int main() {
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a) / sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "The maximum contigious Sum" << max_sum;
    return 0;
}