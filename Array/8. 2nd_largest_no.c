#include "stdio.h"

int main()
{
	int size;
	int second_largest;
	int large;

	printf("Enter the size of the arrar: \n");
	scanf("%d",&size);

	int array[size];
	printf("Enter the Elements of the array\n");
	for (int i = 0; i < size; ++i)
	{
		/* code */
		scanf("%d",&array[i]);
	}

	large = array[0];
	for (int i = 0; i < size; ++i)
	{
		/* code */
		if(array[i]>large)
		{
			large = array[i];

		}
	}

	second_largest = array[1];
	for (int i = 0; i < size; ++i)
	{
		/* code */
		if(array[i] != large)
		{
			if(array[i] > second_largest)
				second_largest = array[i];
		}
	}
	printf("The largeest number is %d", large);
	printf("\n The second_largest no. is %d \n", second_largest);

	return 0;
}
