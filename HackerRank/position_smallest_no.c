#include <stdio.h>

int main()
{
	int size;
	int small,pos;
	printf("Enter the size of the Array\n");
	scanf("%d",&size);

	int array[size];
	printf("Enter the Elements of Array: \n");
	for (int i = 0; i < size; ++i)
	{
		/* code */
		scanf("%d",&array[i]);
	}

	small = array[0];
	for (int i = 0; i < size; ++i)
	{
		/* code */
		if(array[i]<small)
		{
			small = array[i];
			pos = i+1;
		}
	}

	printf("The Smallest number is at %d and is %d \n", pos,small);
}