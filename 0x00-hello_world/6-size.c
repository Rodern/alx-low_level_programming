#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print the size of variables of different types
 * Return: Always 0 (Success)
 * Author: Alain Kimbu
 */
int main(void)
{
	/* Declaring various variables */
	char a;
	int b;
	long int c;
	long long d;
	float e;
	/* Printing sizes of variables */
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
