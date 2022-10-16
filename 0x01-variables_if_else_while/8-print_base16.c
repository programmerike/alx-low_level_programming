#include <stdio.h>
/**
 * main - prints all the numbers in base 16 in lower case
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (num = 'a'; num <= 'f'; num++)
		putchar(num);
	putchar('\n');

	return (0);
}
