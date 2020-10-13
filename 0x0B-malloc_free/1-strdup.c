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
	int i;

	if (str == NULL)
		return (NULL);


	str2 = malloc(sizeof(char) * 10);

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != 0; i++)
	{
		str2[i] = str[i];
	}

	return (str2);

}
