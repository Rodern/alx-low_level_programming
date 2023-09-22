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
	char *s = "", *src2 = "";

	src2 = strcpy(src2, src + n);
	s = strcat(dest, src2);
	return (s);
}
