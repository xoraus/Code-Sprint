#include <stdio.h>

void reverseArray(int arr[], int start, int end)
{
	int temp;
	while(start < end) {

	temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	start++;
	end--;
	}
}

void printArray(int arr[], int size)
{
	int i;
	for(int i=0; i<size; i++)
	{
		printf("%d\n", arr[i]);
		printf("\n");
	}
}

int main()
{
	int arr[] = {1,2,3,4,5,6,};
	printArray(arr, 6);
	reverseArray(arr, 0, 5);
	printArray(arr, 5);
	return 0;
}