#include <stdio.h>
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		putchar(lowerCase);
	}
	putchar('\n');
}
