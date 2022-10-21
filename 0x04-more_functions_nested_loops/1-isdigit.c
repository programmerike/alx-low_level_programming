#include "main.h"

/**
 * _isdigit -  checks for a digit (0 through 9).
 * @c: The character to be acted on
 *
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
