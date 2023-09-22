#include <string.h>

/**
 * _strcat - function
 * @dest: string 1
 * @src: string 2
 * @n: integer
 *
 * Return: (char*)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s = "";

	s = strcat(dest, src[n]);
	return (s);
}
