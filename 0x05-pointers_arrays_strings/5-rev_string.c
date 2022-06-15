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

	while (*(str + k) != p)
		k++;
	w = k;
	char var[w];

	while (!(k < 0))
	{
		k--;
		*(var + j) = *(str + j);
		if (k >= (w / 2))
		{
			*(str + j) = *(str + k);
		}
		else
		{
			*(str + j) = *(var + k);
		}
		j++;
	}
}
