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
	int (*result)(int, int);
	char *s;

	if (array && args == 4)
	{
		num1 = atoi(*(array + 1));
		num2 = atoi(*(array + 3));
		if (!num2 && (array[2][0] == '/' || array[2][0] == '%'))
		{
			printf("Error\n");
			exit(100);
		}
		s = *(array + 2);
		result = get_op_func(s);
		if (!result || (array[2][1] != '\0'))
		{
			printf("Error\n");
			exit(99);
		}
		else
			printf("%d\n", result(num1, num2));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
