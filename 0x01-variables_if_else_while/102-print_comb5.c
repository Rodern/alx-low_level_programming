#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* variable for loop */
	int i = 0, k = 0, j = 0, l = 1;

	for (i = 0; i <= 9; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			for (j = 0; j <= 9; j++)
			{
				for (l = 1 + k; l <= 9; l++)
				{
					putchar(i + '0');
					putchar(k + '0');
					putchar(' ');
					putchar(j + '0');
					putchar(l + '0');
					if (!(i == 9 && k == 8 && j == 9 && l == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
