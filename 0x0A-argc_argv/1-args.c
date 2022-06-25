#include "main.h"
#include <unistd.h>
/**
 * main - prints out the name of the program
 * @argc: the number of arguments passed
 * @argv: a char pointer to the passed arguments
 * Return: an int indicating success
 */
int main(int agrc, char __attribute__ ((unused)) *argv[])
{
	int i;

	i = agrc - 1;
	_putchar(i + '0');
	_putchar('\n');
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
