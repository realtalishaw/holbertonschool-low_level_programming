#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - fdslkfds
 * @s1: fdsfsd
 * @s2: fdafdaafa
 *
 * Return: fda
 */

char *str_concat(char *s1, char *s2)
{
	char *both;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	both = malloc((sizeof(s1) + sizeof(s2)));

	if (both == NULL)
	{
		return(NULL);
	}


	for (i = 0; s1[i] != 0; i++)
 	{
 		both[i] = s1[i];
	}
	for (j = 0; s2[j] != 0; j++)
	{
		both[i + j] = s2[j];
	}
 	return (both);
}
