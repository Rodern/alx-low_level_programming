#include "main.h"

/**
 * _islower - function
 * @c: The int to b checked
 *
 * Return: (int)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
