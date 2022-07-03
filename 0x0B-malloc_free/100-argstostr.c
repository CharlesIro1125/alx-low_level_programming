#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - args concatenation
 * @ac: length of the arg
 * @av: arg vector
 * Return: char pointer
 */
char *argstostr(int ac, char **av)
{
	char *tar;
	int i;
	int p = 0;
	int k = 0, j, s = 0, m = 0;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][k] != '\0')
			k++;
		p += k;
		k = 0;
	}
	tar = (char *)malloc(sizeof(char) * (p + ac));
	if (tar == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		while (av[j][s] != '\0')
			s++;
		for (k = 0; k < s; k++)
		{
			tar[m] = av[j][k];
			m++;
		}
		tar[m] = '\n';
		m++;
		s = 0;
	}
	return (tar);
}
