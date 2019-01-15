#include <stdio.h>
#define bool int

bool hasArrayTwoCandidates(int A[], int arr_size, int sum) {
    int l,r;
    l = 0;
    r = arr_size-1;

    while(l<r) {
        if(A[l] + A[r] == sum)
            return 1;
        else if (A[l] + A[r] < sum)
            l++;
        else
        r--;
    }

}

int main(int argc, char const *argv[])
{
    int A[] = {1,2,4,34,354,54,6,56,57,67,};
    int sum = 356;
    int arr_size = 10;

    if(hasArrayTwoCandidates(A,arr_size,sum))
        printf("Yes the array has two elements");
    else
        printf("No the array does not have two elements");

    return 0;
}
