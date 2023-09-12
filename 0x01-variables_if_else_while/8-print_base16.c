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

	/* starting from 15 down to 0, are all hexadeximal numbers in base 16*/
	do {
		if (i <= 9)
			putchar(i + '0');
		else
			putchar(i - 10 + 'a');
		i++;
	} while (i < 16);
	putchar('\n');
	return (0);
}
