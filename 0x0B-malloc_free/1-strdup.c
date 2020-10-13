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

	if (str == NULL)
		return (NULL);
	else
		str2 = malloc(sizeof(char) * 10);

	if (str2 == NULL)
	{
		printf("failed to allocate memory");
		return (NULL);
	}
	strcpy(str2, str);
	return (str2);

}
