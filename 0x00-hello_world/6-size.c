#include <stdio.h>
/**
 * main - program that prints the sizes
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d; 
	float f;
	printf("Size of a char: %zu bytes\n", sizeof(a));
	printf("Size of a int: %zu bytes\n", sizeof(b));
	printf("Size of a long int: %zu bytes\n", sizeof(c));
	printf("Size of a long long int: %zu bytes\n", sizeof(d));
	printf("Size of a float: %zu bytes\n", sizeof(f));
	return (0);
