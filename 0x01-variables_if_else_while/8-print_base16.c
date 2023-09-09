#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* variable for loop */
	int i = 16;

	/* starting from 16 down to 0, are all hexadeximal numbers in base 16*/
	do {
		putchar(i + '0');
		i--;
	} while (i < 0);
	putchar('\n');
	return (0);
}
