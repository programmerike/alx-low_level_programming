#include <stdlib.h>
#include <time.h>
/**
 * main -> assign a random number to the variable n each time it is executed
 * and print the last digit of the number stored in the variable n
 * Return: Always 0 (Sucess)
 */
#include <stdio.h>
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
scanf("%d", &n);
	if (n > 0.0)
{
	printf("%d is positive\n", n);
}
	else if (n < 0.0)
{
	printf("%d is negative\n", n);
}
	else
{
	printf("%d is zero\n", n);
}
	return (0);
}
