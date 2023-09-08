#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: Always 0 (Success)
 * Author: Alain Kimbu
 */
int main(void)
{
	/* variable for loop */
	int i = 97;

	/** starting from 97 to 122,
	 * are all lowercase letters
	 */
	do
	{
		putchar(i);
		i++;
	} while (i < 122);
	putchar('\n');
}
