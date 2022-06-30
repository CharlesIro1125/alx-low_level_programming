#include "main.h"
/**
 * _abs -checks for uppercase character
 *
 * Return: 1 if c is uppercase, 0 otherwise
 * @c: character to be checked
 */
int _abs(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
