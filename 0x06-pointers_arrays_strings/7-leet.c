#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * leet - function
 * @s: characters
 *
 * Return: (char *)
 */
char *leet(char *s)
{
	int len = strlen(s);

	for	(int i = 0; i < len; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = '4';
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = '3';
		}
		else if (s[i] == 'i' || s[i] == 'I')
		{
			s[i] = '1';
		}
		else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = '0';
		}
		else if (s[i] == 's' || s[i] == 'S')
		{
			s[i] = '5';
		}
		else if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = '7';
		}
	}
	return (s);
}
