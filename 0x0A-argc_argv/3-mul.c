#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - prints out the name of the program
 * @argc: the number of arguments passed
 * @argv: a char pointer to the passed arguments
 * Return: an int indicating success
 */
int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;
	char *error[] = "error";
	int i;

	num1 = atoi(*(argv + 1));
	num2 = atoi(*(argv + 2));


	if ((argc - 1) == 2)
	{
		result = num1 * num2;
		printf("%d", result);
		return (0);

	}
	else
	{
		for (i = 0; *(error + i) != '\0'; i++)
			_putchar(*(error + i));
		_putchar('\n');
		return (1);
	}
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character tp print
 * Description: user defined function
 * of the putchar function
 * Return: On success '1'.
 * On error, -1 is returned, and errno is
 * set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
