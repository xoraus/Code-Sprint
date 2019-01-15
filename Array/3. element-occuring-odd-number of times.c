#include <stdio.h>

int getOddOccurence(int ar[], int n) {
    int i = 0;
    int res = 0;
    for (i = 0; i < n; i++)
        res = res ^ ar[i];

    return res;
}

int main(int argc, char const *argv[])
{
    int ar[] = {1, 2, 3, 324, 325, 346, 456, 575, 34534, 12, 13, 12};
    int n = sizeof(ar) / sizeof(ar[0]);
    printf("%d", getOddOccurence(ar, n));
    return 0;
}
