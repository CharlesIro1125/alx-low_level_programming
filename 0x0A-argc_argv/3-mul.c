#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiple two numbers
 * @argc: the number of arguments passed
 * @argv: a char pointer to the passed arguments
 * Return: an int indicating success
 */
int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;
	char error[] = "Error";

	if (argc == 3)
	{
		num1 = atoi(*(argv + 1));
		num2 = atoi(*(argv + 2));
		result = num1 * num2;
		printf("%d\n", result);
	}
	else
	{
		printf("%s\n", error);
		exit(1);
	}
	return (0);
}
