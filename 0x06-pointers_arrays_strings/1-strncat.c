#include <string.h>

/**
 * _strncat - function
 * @dest: string 1
 * @src: string 2
 * @n: integer
 *
 * Return: (char*)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s = "";
	
	s = strncat(dest, src, n);
	return (s);
}
