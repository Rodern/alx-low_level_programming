#include <string.h>

/**
 * reverse_array - function
 * @a: array of integers
 * @n: integer
 *
 * Return: (int [])
 */
void reverse_array(int *a, int n)
{
	int start = 0, end = n - 1;

	while (start < end)
	{
		/* Swap elements at start and end */
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;

		/* Move towards the middle of the array */
		start++;
		end--;
	}
	return (s);
}
