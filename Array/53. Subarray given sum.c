#include<stdio.h>

int subArraySum(int arr[], int n, int sum) {
    // intialize the current sum as the first element
    int curr_sum = arr[0], start = 0, i;

    for (i = 0; i <= n; i++) {

        // if the current element exceeds the sum, then remove the starting elements

        while (curr_sum > sum && sum < i-1) {
            curr_sum = curr_sum - arr[start];
            start++;
        }

        // if the current element becomes equal to the sum, return true

        if(curr_sum == sum) {
            return 1;
        }

        // add this element to the array
        if( i < n)
            curr_sum = curr_sum + arr[i];
    }
}
