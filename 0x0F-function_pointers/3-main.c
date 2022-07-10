#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * main - the main method
 * @args: the number of argument
 * @array: pointer array of char
 * Return: int
 */
int main(int args, char *array[])
{
	int num1, num2;
	long int result;
	char *s;

	if (array && args == 4)
	{
		if (array[1] && array[3] && array[2])
		{
			num1 = atoi(*(array + 1));
			num2 = atoi(*(array + 3));
			s = *(array + 2);
			result = get_op_func(s)(num1, num2);
			printf("%ld\n", result);
		}
	}
	return (0);
}
