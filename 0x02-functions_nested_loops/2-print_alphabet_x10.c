#include "main.h"
/**
 * print_alphabet_x10 - Make the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char lowerCase;
	int i = 0;

	while (i <= 9)
	{

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		_putchar(lowerCase);
	}

	_putchar('\n');

	i++;
	}
}
