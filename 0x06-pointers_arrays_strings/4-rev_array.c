#include <stdio.h>
#include "main.h"

/**
 * reverse_array - A function that reverses
 * an array.
 * @a: A pointer to source array of
 * type int
 * @n: The size of the array
 * Description: reverses the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, w, j = 0;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		w = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = w;
		j--;
	}
}
