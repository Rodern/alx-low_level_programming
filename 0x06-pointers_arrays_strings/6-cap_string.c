#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * cap_string - function
 * @a: characters
 *
 * Return: (char *)
 */
char *cap_string(char *a)
{
	int i = 0;

	for (i = 0; a[i]; i++)
	{
		if (a[i] == ' ' || a[i] == '.' || a[i] == '\n')
		{
			a[i + 1] = toupper(a[i + 1]);
		}
	}
	return (a);
}
