#include "main.h"
#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - add numbers
 * @argc: the number of arguments passed
 * @argv: a char pointer to the passed arguments
 * Return: an int indicating success
 */
int main(int argc, char *argv[])
{
	int i = argc - 1, j = 1;
	long int num1 = 0, val;
	char error[] = "Error";

	for (j = 1; j <= i; j++)
	{
		errno = 0;
		val = atoi(*(argv + j));
		if ((errno == ERANGE && (val == LONG_MAX || val == LONG_MIN))
				|| val == 0)
		{
			printf("%s\n", error);
			return (1);
		}
		num1 += val;
		if (j == i)
			printf("%ld\n", num1);
	}
	if (!(argc - 1))
	{
		printf("%d\n", 0);
		return (1);
	}
	return (0);
}
