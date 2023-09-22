#include <string.h>

/**
 * _strcat - function
 * @dest: string 1
 * @src: string 2
 *
 * Return: (char*)
 */
char *_strcat(char *dest, char *src)
{
	char *s = "";

	s = strcat(dest, src);
	return (s);
}
