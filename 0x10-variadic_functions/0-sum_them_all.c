#include <stdarg.h>

/**
 * sum_them_all - a variadic function of sum
 * @arg1: the first argument
 * Return: an int
 */
int sum_them_all(const unsigned int arg1, ...)
{
	va_list va;
	unsigned int i;
	int sum = 0;

	if (arg1 == 0)
		return (0);
	va_start(va, arg1);
	for (i = arg1; i != NULL, i = va_agr(va, int))
		sum += i;
	va_end(va);
	return (sum);
}
