#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;
largest = a, b, c;
	if (a > b && b > c)
	{
		printf("The largest number is a\n");
	}
	else if (b > a && a > c)
	{
		printf("The largest number is b\n");
	}
	else
	{
		printf("The largest number is c\n");
	}

	return (largest);
}
