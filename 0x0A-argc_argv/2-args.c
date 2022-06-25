#include "main.h"
#include <unistd.h>
/**
 * main - prints out the name of the program
 * @argc: the number of arguments passed
 * @argv: a char pointer to the passed arguments
 * Return: an int indicating success
 */
int main(int argc, char *argv[])
{
	char *name;
	int i;
	int j;

	j = 1;
	while (j < argc)
	{
		name = *(argv + j);
		for (i = 0; *(name + i) != '\0'; i++)
			_putchar(*(name + i));
		_putchar('\n');
		j++;
	}
	return (0);
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
