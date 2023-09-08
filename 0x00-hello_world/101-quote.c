#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *str1 = "and that piece of art is useful";
	const char q = '"';
	const char *str2 = " - Dora Korpar, 2015-10-19\n";
	const int str_length1 = 31;
	const int str_length2 = 27;
	/* Printing the string using fwrite */
	fwrite(str1, sizeof(char), str_length1, stdout);
	putchar(q);
	fwrite(str2, sizeof(char), str_length2, stdout);
	return (1);
}
