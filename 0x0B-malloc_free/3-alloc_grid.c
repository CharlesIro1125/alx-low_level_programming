#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - create a 2 dimensional array
 * @width: the width of the array
 * @height: the height of the array
 * Return: pointer to a pointer
 */
int **alloc_grid(int width, int height)
{
	int **tar;
	int i, p, k;

	i = 0;
	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);

	tar = (int **)malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
	{
		tar[i] = (int *)malloc(sizeof(int) * width);
		if (tar[i] == NULL)
		{
			for (p = 0; p < height; p++)
				free(tar[p]);
			free(tar);
			return (NULL);
		}
		for (k = 0; k < width; k++)
			tar[i][k] = 0;
	}
	return (tar);
}
