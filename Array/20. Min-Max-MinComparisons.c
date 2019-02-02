#include<stdio.h>

// structure is used to return two values from minMax()

struct pair {
    int min;
    int max;
};

struct pair getMinMax(int arr[], int n) {
    struct pair minmax;
    int i;

    // if the array even elements the initialize the first two
    // elements asminimum and the maximum

    if(n%2 == 0) {
        if(arr[0] > arr[1]) {
            minmax.max = arr[0];
            minmax.min = arr[1];
        }
        else {
            minmax.min = arr[0];
            minmax.max = arr[1];
        }
        i = 2;
    }
    // if the array has odd number of elements then

    else {
        minmax.min = arr[0];
        minmax.max = arr[0];
        i = 1; // set the starting index of the loop
    }

// in the while loop pick the elements in the pair
// compare with the min and max so far

while(i < n-1) {
    if(arr[i] > arr[i+1]) {

    if(arr[i] > minmax.max)
        minmax.max = arr[i];
    if(arr[i+1] < minmax.min)
        minmax.min = arr[i + 1];
}
else {
    if(arr[i+1] > arr[i])
        minmax.max = arr[i + 1];
    if(arr[i] < minmax.min)
        minmax.min = arr[i];
}
    i += 2; // increments the element by two as two elements are processed

}
return minmax;
}

int
main()
{
    int arr[] = {1000, 11, 455, 1, 300, 3000};
    int arr_size = 6;
    struct pair minmax = getMinMax(arr, arr_size);
    printf("\n Minimum element is %d", minmax.min);
    printf("\n Maximum element is %d", minmax.max);
    getchar();
}