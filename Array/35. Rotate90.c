#include<stdio.h>
#include<stdlib.h>
// rotating the image by 90 degree

void displayMatrix(unsigned int const *p, unsigned int row, unsigned int col);

void rotate(unsigned int *pS, unsigned int *pD, unsigned int row, unsigned col);

void displayMatrix(unsigned int const *p, unsigned int r, unsigned int c) {
    unsigned int row, col;
    printf("\n\n");

    for (row = 0; row < r; row++) {
        for (col = 0; col < c; col++) {
            printf("%d\t", *(p + row * c + col));
        }
        printf("\n");
    }
        printf("\n\n");
}

void rotate(unsigned int *pS, unsigned int *pD, unsigned int row, unsigned col) {
    unsigned int r, c;
    for (r = 0; r < row; r++) {
        for (c = 0; c < col; c++) {
            *(pD + c * row + (row - r - 1)) = *(pS + r * col + c);
        }
    }
}



int main() {
    unsigned int image[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    unsigned int *pSource;
    unsigned int *pDestination;
    unsigned int m, n;

    // setting thr initial value and memory allocation
    m = 3;
    n = 4;
    pSource = (unsigned int *) image;
    pDestination = (unsigned int *)malloc(sizeof(int) * m * n );

    // process each buffer

    displayMatrix(pSource, m, n);
    rotate(pSource, pDestination, m, n);
    displayMatrix(pDestination, m, n);

    free(pDestination);
    getchar();
    return 0;
}