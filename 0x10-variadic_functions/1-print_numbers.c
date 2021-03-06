#include <stdarg.h>
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

	va_start(var, n);
	for (j = va_arg(var, int); count < n; count++)
	{
		printf("%d", j);
		if (separator && count < (n - 1))
			printf("%s", separator);
		j = va_arg(var, int);
	}
	printf("\n");
	va_end(var);
}
