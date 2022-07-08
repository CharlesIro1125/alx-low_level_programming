#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - a variadic function of sum
 * @arg1: the first argument
 * Return: an int
 */
int sum_them_all(const unsigned int arg1, ...)
{
	va_list var;
	unsigned int j, i = 0;
	int sum = 0;

	if (arg1 == 0)
		return (0);
	va_start(var, arg1);
	for (j = va_arg(var, int); i < arg1; j = va_arg(var, int))
	{
		sum += j;
		i++;
	}
	va_end(var);
	return (sum);
}
