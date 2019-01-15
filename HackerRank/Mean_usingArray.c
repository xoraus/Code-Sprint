#include <stdio.h>


int main()
{
	int size;
	int sum = 0;
	float mean = 0.0;

	printf("Enter the Size of the Array: \n");
	scanf("%d",&size);

	int array[size];
	printf("Enter the Number (to find mean)\n");

	for (int i = 0; i < size; ++i)
	{
		/* code */
		printf("a[%d] = ", i);
		scanf("%d",&array[i]);
	}

	// mean 

	for (int i = 0; i < size; ++i)
	{
		/* code */
		sum = sum + array[i];
	}
	mean = (float)sum/size;

	printf("Mean = %.2f ", mean);

	return 0;
}