#include "main.h"
#include <ctype.h>
/**
 * _islower - Entry point
 *
 * Description: this function checks for
 * lowercase charater
 * @c: character int
 * Return: 1 if true or 0 otherwise
 *
 */
int _islower(int c)
{
	int r;

	r = islower(c);

	if (r == 0)
		return (r);
	else
		return (1);
}
