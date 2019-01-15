#include <stdio.h>

int getMissingNumber(int a[], int n)
{
	int i, total;
	total = (n+1) * n(n+2)/2;

	for(i=0; i<n; i++)
		total -=a[i];
	return total;
}

int main()
{
	int a[] = {1,2,3,4,5,6};
	int miss = getMissingNumber(a, 5);
	printf("%d\n", miss); 
}