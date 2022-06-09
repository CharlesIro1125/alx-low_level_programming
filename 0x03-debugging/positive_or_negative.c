#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - checks the number
 *
 * Description: the main funtion checks the
 *  number and output if sign or unsign.
 * Return: null
 */
int positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
