#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - fdsgfd
 * @nmemb: fdsfds
 * @size: fdsd
 *
 * Return: fdkfds
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new = malloc(nmemb * size);

	if (new == NULL)
		return (NULL);

	if (new)
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			new[i] =  '\0';
		}
	}

	return (new);
}
