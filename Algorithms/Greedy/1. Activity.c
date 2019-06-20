#include <stdio.h>


int printMaxActivities(int s[], f[], int n) {
    int i, j;

    // the first activity alwasys get selected;

    i = 0;
    printf("%d", i);

    // consider the rest of the activites
    for (j = 1; j < n; j++) {
        
        // if this activity has the start time greater than
        // of equal to the finish time of previous activity
        // then select it

        if(s[j] >= f[i]) {
            printf("%d", j);
            i = j;
        }
    }
}

int main() {
    int s[] = {1, 3, 0, 5, 8, 5};
    int f[] = {2, 4, 6, 7, 9, 9};

    int n = sixeof(s) / sizeof(s[0]);
    printMaxActivities(s, f, n);
    return 0;
}