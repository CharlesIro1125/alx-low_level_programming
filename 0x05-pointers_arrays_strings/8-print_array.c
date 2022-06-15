#include "main.h"
#include <stdio.h>

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
	char p = '\0';

	while (*(a + k) != p)
	{
		if (k < n - 1)
		{
			printf("%d", *(a + k));
			k++;
			printf(",");
			printf(" ");
		}
		else if (k == n - 1)
		{
			printf("%d", *(a + k));
			k++;
		}
		else
			break;
	}
	printf("\n");
}
