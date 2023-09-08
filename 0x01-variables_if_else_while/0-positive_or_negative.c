#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Always 0 (Success)
 * Author: Alain Kimbu
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
		printf("%d is 0\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
