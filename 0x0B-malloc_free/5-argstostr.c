#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - fdsgdgs
 * @ac: fdsgd
 * @av: dsfds
 *
 * Return: fdgsgdf
 */

char *argstostr(int ac, char **av)
{
	char *ar, *both;
	int i, n, cat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] != 0; n++)
			cat++;
		cat++;
	}
	cat += 1;
	ar = malloc(cat * sizeof(char));

	if (ar == NULL)
		return (NULL);
	both = ar;
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] != 0;)
		{
			*ar = av[i][n];
			n++;
			ar++;
		}
		*ar = '\n';
		ar++;
	}
	return (both);
}
