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

	for (i = 0; a[i]; i++)
	{
		if (i == strlen(a) - 1)
		{
			a[i] = a[i];
		}
		else
		{
			a[i] = toupper(a[i]);
		}
	}
	return (a);
}
