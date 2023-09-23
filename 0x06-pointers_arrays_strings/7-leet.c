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

	for (int i = 0; i < len; i++)
	{
		char c = tolower(s[i]);
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 's' || c == 't')
		{
			s[i] = (c == 'a') * '4' + (c == 'e') * '3' + (c == 'i') * '1' + (c == 'o') * '0' + (c == 's') * '5' + (c == 't') * '7';
		}
	}
}
