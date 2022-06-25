#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * main - prints out the name of the program
 * @agrc: the number of arguments passed
 * @argv: a char pointer to the passed arguments
 * Return: an int indicating success
 */
int main(int agrc, char __attribute__ ((unused)) *argv[])
{
	int i;

	i = agrc - 1;
	printf("%d\n", i);
	return (0);
}
