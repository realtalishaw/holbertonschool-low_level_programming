#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - gfd
 * @size: fdsds
 * @c: fdss
 *
 * Return: nflkds
 */

char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int i;

	if (size == 0)
		return (NULL);

	m = malloc(sizeof(c) * size);

	if (m  == NULL)
	{
		printf("Malloc Failed");
		return (NULL);
	}
	i = 0;
	for (; i < size; i++)
	{
		m[i] = c;
	}
	return (m);
}
