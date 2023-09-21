#include "main.h"

/**
 * print_alphabet_x10 - function
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 97, j = 0;

	while (j < 10)
	{
		i = 97;
		do {
			_putchar(i);
			i++;
		} while (i < 123);
		_putchar('\n');
		j++;
	}
}

