#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* variable for loop */
	int i = 0, k = 0, j = 0;

	for (i = 0; i <= 9; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (k != 0)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(i + '0');
			putchar(k + '0');
		}
	}
	putchar('\n');
	return (0);
}
