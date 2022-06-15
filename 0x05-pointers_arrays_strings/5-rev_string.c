#include "main.h"

/**
 * rev_string - function that prints a string
 * in reverse order.
 * @str: A string pointer
 *
 * description: prints out the string in
 * reverse to stdout.
 * Return: returns string.
 */
void rev_string(char *str)
{
	int k, j = 0;
	int w;
	char p = '\0';

	while (*(s + k) != p)
		k++;
	char v[k];

	w = k;
	while (!(k < 0))
	{
		k--;
		*(v + j) = *(str + j);
		if (k >= (w / 2))
		{
			*(str + j) = *(str + k);
		}
		else
		{
			*(str + j) = *(v + k);
		}
		j++;
	}
}
