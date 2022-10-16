#include <stdio.h>
/**
 * main - prints lower case in reverse
 *
 *Return: 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph >= 'z'; alph--)
		putchar(alph);
	putchar('\n');

	return (0);
}
