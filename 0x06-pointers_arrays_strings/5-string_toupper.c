#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * string_toupper - function
 * @a: characters
 *
 * Return: (char *)
 */
char *string_toupper(char *a)
{
	int i = 0;
	char *s = malloc(sizeof(char) * strlen(a));

	for (i = 0; i <= strlen(a) - 1; i++)
	{
		if (i == strlen(a) - 1)
		{
			s[i] = a[i];
		}
		else
		{
			s[i] = toupper(a[i]);
		}
	}
	return (s);
}
