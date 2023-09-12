#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* variable for loop */
	int i = 0, k = 0, j = 0, l = 0;

	for (i = 0; i <= 9; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			for (j = 0; j <= 9; j++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (k != 0)
					{
						putchar(',');
						putchar(' ');
					}
					putchar(i + '0');
					putchar(k + '0');
					putchar(' ');
					putchar(j + '0');
					putchar(l + '0');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
