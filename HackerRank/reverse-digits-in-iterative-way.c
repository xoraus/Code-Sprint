#include <stdio.h>

int reverseDigits(int num)
{
	int rev_num= 0;
	while(num > 0)
	{
		rev_num = rev_num * 10 + num % 10;
		num = num/10;
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
