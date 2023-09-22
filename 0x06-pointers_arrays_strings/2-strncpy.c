#include <string.h>

/**
 * _strncpy - function
 * @dest: string 1
 * @src: string 2
 * @n: integer
 *
 * Return: (char*)
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *s = "";

	s = strncpy(dest, src, n);
	return (s);
}
