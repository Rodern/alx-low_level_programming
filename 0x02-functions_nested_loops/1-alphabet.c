#include "main.h"

/**
 * print_alphabet - function
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i = 97;

	do {
		_putchar(i);
		i++;
	} while (i < 123);
	_putchar('\n');
}

