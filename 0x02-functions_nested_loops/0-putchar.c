#include <string.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: this function uses a defined
 * function called _putchar
 * Return: int of zero
 *
 */
int main(void)
{
	char word[10] = {"_putchar"};
	int k;

	for (k = 0; k <= (int)strlen(word); k++)
		_putchar(word[k]);
	_putchar('\n');
	return (0);
}
