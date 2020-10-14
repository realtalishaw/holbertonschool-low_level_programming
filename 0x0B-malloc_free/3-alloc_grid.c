#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - fdsdf
 * @width: fdoskfl;sd
 * @height: fdkhjfks
 *
 * Return: fdjslkd
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, n, x, f;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
		return(NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (f = 0; f < i; f++)
			{
				free(array[f]);
				free(array);
				return (NULL);
			}
		}
		for (n = 0; n < height; n++)
		{
			for (x = 0; x < width; x++)
				array[n][x] = 0;
		}
	}

	return (array);
}
