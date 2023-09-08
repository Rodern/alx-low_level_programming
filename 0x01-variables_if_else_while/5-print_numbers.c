#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* variable for loop */
	int i = 0;

	/* starting from 0, print all single digits */
	do {
		printf("%d", i);
		i++;
	} while (i < 10);
	putchar('\n');
	return (0);
}
