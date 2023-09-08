#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* variable for loop */
	int i = 97;

	/* starting from 97 to 122, are all lowercase letters */
	do {
		putchar(i);
		putchar('\n');
		i++;
	} while (i < 122);
	return (0);
}
