#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - a variadic function of sum
 * @separator: the first argument
 * @n: the second arg
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list var;
	unsigned int j, count = 0;

	/**
	* if (*separator == '\0')
	* return;
	*
	*/
	va_start(var, n);
	for (j = va_arg(var, int); count < n; count++)
	{
		printf("%d", j);
		if (count < n - 1)
			printf("%c ", *separator);
		j = va_arg(var, int);
	}
	printf("\n");
	va_end(var);
}
