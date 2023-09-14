#include <unistd.h>

/**
 * _putchar - print char
 * @c: chr to be printed
 *
 * Return: (char)
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

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
}

/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
