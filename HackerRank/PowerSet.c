#include <stdio.h>
#include <math.h>

void printpowerSet(char *set, int set_size)
{
	/* Set_size of power set of a set with set_size n is (2^n - 1) */
	unsigned int pow_set_size = pow(2, set_size);
	int counter, j;
	/* Run from counter 000 to 111 */
	for(counter = 0; counter < pow_set_size; counter++)
	{
		for(j=0;j< set_size; j++)
		{
			/* check if jth bit in the counter is set, if set then print the jth element from the set */
			if(counter & (1<<j))
				printf("%c", set[j]);
		}
		printf("\n");
	}
}

int main()
{
	char set [] = {'a','b','c'};
	printpowerSet(set, 3);
	return 0;
}
