#include "main.h"
/**
 * print_alphabet - Make the alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		_putchar(lowerCase);
	}

	_putchar('\n');
}
