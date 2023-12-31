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
	char *s = malloc(sizeof(char) * strlen(a));

	strcpy(s, a);
	for (i = 0; a[i]; i++)
	{
		if (a[i] == ' ' || a[i] == '.' || a[i] == '-' || a[i] == '_' || a[i] == '\n'
				|| a[i] == '\t' || (isdigit(a[i]) && (a[i + 1] >= 97 && a[i + 1] <= 122)))
		{
			s[i + 1] = toupper(a[i + 1]);
		}
	}
	return (s);
}
