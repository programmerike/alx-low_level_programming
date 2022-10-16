#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerCase;
for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	putchar(lowerCase);
	putchar('\n');
	return (0);
}
