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
		for (k = 1 + i; k <= 9; k++)
		{
			for (j = 1 + k; j <= 9; j++)
			{
				if (j != 2 && i != 9)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i + '0');
				putchar(k + '0');
				putchar(j + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}
