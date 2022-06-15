#include "main.h"

/**
 * print_array - function that prints array
 * @a: An array pointer
 * @n: number of int to print
 *
 * description: prints out the array
 * to stdout.
 * Return: returns array.
 */
void print_array(int *a, int n)
{
	int k = 0;
	int w;
	char p = '\0';

	while (*(a + k) != p)
	{
		if (k < n - 1)
		{
			printf("%d", *(a + k));
			k++;
			_putchar(',');
			_putchar(' ');
		}
		else if (k == n - 1)
		{
			printf("%d", *(a + k));
			k++;
		}
		else
			break;
	}
	_putchar('\n');
}
