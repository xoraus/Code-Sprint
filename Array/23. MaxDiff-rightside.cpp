#include<iostream>
using namespace std;

int maxdiff(int arr[], int n) {
    int diff = arr[1] - arr[0];
    int curr_sum = diff;
    int max_sum = curr_sum;

    for (int i = 0; i < n; i++) {
        // calculate the current difference
        diff = arr[i + 1] - arr[i];

        // calculate the current sum
        if(curr_sum > 0)
            curr_sum += diff;
        else
            curr_sum = diff;

        // update max sum if needed
        if(curr_sum > max_sum)
            max_sum = curr_sum;
    }
    return max_sum;
}

int main() {
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Max sum is: %d", maxdiff(arr, size);
    return 0;
}