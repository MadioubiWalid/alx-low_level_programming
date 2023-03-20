#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("the last digit of %d is %d is greater than 5\n", n, last_digit);
	}
	else if (n == 0)
	{
		printf("the last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{
		printf("the last digit of %d is %d is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}
