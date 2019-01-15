#include <stdio.h>
# define bool int

int findCandidate(int *, int);
bool isMajority(int *, int, int);

bool printMajority(int a[], int size) {
    // find the candidate for the majority element
    int cand = findCandidate(a, size);

    // print the majority element is available
    if(isMajority(a,size,cand))
        printf("%d ", cand);
    else
        printf("NO majority element");
}

bool isMajority(int a[], int size, int cand) {
    int i = 0;
    int count = 0;
    for (i = 0; i < size;i++) {
        if(a[i]==cand)
            count++;
        if(count > size/2)
            return 1;
        else
            return 0;
}

int findCandidate(int a[], int size) {
    int maj_index = 0, count = 1;
    int i;
    for (i = 1; i < size; i++) {
        if (a[maj_index] == a[i])
            count++;
        else
            count--;
        if(count == 0) {
        maj_index = i;
        count = 1;
        }
    }
        return a[maj_index];
}

int main() {
    int a[] = {1,2,2,3,2};
    printMajority(a, 5);
    return 0;
}