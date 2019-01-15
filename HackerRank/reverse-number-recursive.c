#include <stdio>

/* Recursive function to reverse the digits of a number. */

int reverseDigits(int num)
{
	static int rev_num = 0;
	static int base_pos = 1;
	if(num > 0)
	{
		reverseDigits(num/10);
		rev_num += (num%10)*base_pos;
		base_pos *= 10;
	}
	return rev_num;
}

int main()
{
	int n;
	printf("Program to reverse the digits of a numbeer\n\n");
	printf("Enter the number: \n");
	scanf("%d",&n);
	printf("The reversed number is: %d\n",reverseDigits(n));
	return 0;
}
