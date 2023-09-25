#include<stdio.h>

/**
 * _memset - The function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: Pointer to memory area
 * @b: Character to be set
 * @n: First bytes given
 *
 * Return: (char *)
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*s++ = (unsigned char)b;
	}
	return (s);
}
