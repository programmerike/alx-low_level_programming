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
		printf("The largest number is %d", a);
	}
	else if (b > a && a > c)
	{
		printf("The largest number is %d", b);
	}
	else
	{
		printf("The largest number is %d", c);
	}

	return (largest);
}
