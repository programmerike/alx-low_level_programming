#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: Always 1 (Sucess)
 */
#include <unistd.h>
int main(void)
{
	write(2,
	       "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
