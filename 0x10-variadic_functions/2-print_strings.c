#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - a variadic function of string
 * @separator: the first argument
 * @n: the second arg
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{	
	va_list var;
	char *j;
	unsigned int count = 0;

	va_start(var, n);
	for (j = va_arg(var, char *); count < n; count++)
	{
		if (j)
			printf("%s", j);
		else
			printf("%s", "(nil)");
		if (count < n - 1 && separator) 
			printf("%s", separator);
		j = va_arg(var, char *);
	}
	printf("\n");
	va_end(var);
}
