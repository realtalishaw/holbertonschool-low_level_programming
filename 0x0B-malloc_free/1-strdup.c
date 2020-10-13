#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - fdsfds
 * @str: fdss
 *
 * Return: fdsd
 */

char *_strdup(char *str)
{
	char *str2;
	int i, n;

	if (str == NULL)
		return (NULL);

	for (n = 0; str[n] != 0; n++)
		;

	str2 = malloc(sizeof(n) + 1);

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		*(str2 + i) = *(str + i);
	}

	return (str2);

}
