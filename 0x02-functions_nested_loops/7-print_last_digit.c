#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be treated
 *
 * Return: Value of the last digit of number
 */
int print_last_digit(int n)
{
	int lastNum;

	lastNum = n % 10;

	if (lastNum < 0)
	{
		lastNum = lastNum * -1;
	}

	_putchar(lastNum + '0');

	return (lastNum);
}
