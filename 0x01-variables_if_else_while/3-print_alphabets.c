#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* variables for loop */
	int i = 97, k = 65;

	/* starting from 97 to 122, are all lowercase letters */
	do {
		putchar(i);
		i++;
	} while (i < 122);

	/* starting from 65 to 90, are all uppercase letters */
	do {
		putchar(k);
		k++;
	} while (k < 90);
	putchar('\n');
	return (0);
}
