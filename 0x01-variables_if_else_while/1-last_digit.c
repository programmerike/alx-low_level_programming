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
int x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if (n < 6)
{
	printf("Last digit of %d is %d is less than 6 not 0\n", n);
}
if (n > 5)
{
	printf("Last digit of %d is %d is greater than 5\n", n);
}
else if (n == 0)
{
	printf("Last digit of %d is  %d and is 0\n", n);
}
return (0);
}