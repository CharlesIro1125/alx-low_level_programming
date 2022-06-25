#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * main - prints out the name of the program
 * @argc: the number of arguments passed
 * @argv: a char pointer to the passed arguments
 * Return: an int indicating success
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	char *name;

	name = *(argv + 0);
	printf("%s\n",name);
	return (0);
}
