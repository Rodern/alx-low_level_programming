#include "main.h"

/**
 * _isalpha - function
 * @c: The int to be checked
 *
 * Return: (int)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && <= 90))
	{
		return (1);
	}
	return (0);
}

