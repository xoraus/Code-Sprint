#include <stdio.h>
#include <stdlib.h>

/* this function divides a by greatest divisible powerof b */
int maxDivide(int a, int b)
{
    while(a%b == 0)
    {
        a = a/b;
        return a;
    }
}

// Function to check if a number is ugly or not
int isUgly(int no)
{
    no = maxDivide(no, 2);
    no = maxDivide(no, 3);
    no = maxDivide(no, 5);

    return (no == 1)? 1 : 0;
}

// function to get the nth ugly number
int getNthUglyNo(int n)
{
    int i = 1;
    int count = 1; // ugly number count
    // check for all numbers until ugly number count becomes n
    while(n > count)
    {
        i++;
        if (isUgly(i))
            count++;
    }
    return i;
}
int main()
{
    unsigned no = getNthUglyNo(150);
    printf("The  ugly number is %d\n",no);
    return 0;
}
