#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int numbs;

	for (numbs = 0; numbs <= 10; numbs++)
		putchar((numbs % 10)  + 0);
	putchar('\n');

	return (0);
}
