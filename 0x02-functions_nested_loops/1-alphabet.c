#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 *Return: 0 (Success)
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
	return (0);
}
