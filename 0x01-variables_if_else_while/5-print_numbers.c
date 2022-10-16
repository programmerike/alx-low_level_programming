#include <stdio.h>
/**
 * main - printing single digits of base 10 starting from 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int sdigits;

	for (sdigits = 0; sdigits < 10; sdigits++)
		printf("%i", sdigits);
	putchar('\n');

	return (0);
}
