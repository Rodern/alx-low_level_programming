#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 0
 */
int main(void)
{
	/* variable for loop */
	int i = 122;

	/* starting from 97 to 122, are all lowercase letters */
	do {
		putchar(i);
		i--;
	} while (i > 96);
	putchar('\n');
	return (0);
}
