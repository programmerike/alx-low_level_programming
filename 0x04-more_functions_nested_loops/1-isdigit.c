#include "main.h"

/**
 * _isdigit -  checks for a digit (0 through 9).
 * @c: The character to be acted on
 *
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
