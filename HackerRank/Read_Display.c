#include <stdio.h>

int main()
{
	int size;
	printf("Enter the Size of array: ");
	scanf("%d",&size);
	int array[size];

	for (int i = 0; i < size; ++i)
	{
		/* code */
		printf(" a[%d] = ", i);
		scanf("%d",&array[i]);
	}

	printf("The Array Element are :\n");
	for (int i = 0; i < size; ++i)
	{
		/* code */
		printf("%d\n", array[i]);
	}
	return 0;
}
