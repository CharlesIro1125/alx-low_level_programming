#include "main.h"
#include <stdio.h>
/**
 * main - prints out the name of the program
 * @argc: the number of arguments passed
 * @argv: a char pointer to the passed arguments
 * Return: an int indicating success
 */
int main(int argc, char *argv[])
{
	char *name;
	int j;

	j = 0;
	while (j < argc)
	{
		name = *(argv + j);
		printf("%s\n", name);
		j++;
	}
	return (0);
}
