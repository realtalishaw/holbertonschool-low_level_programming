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
	int i, j;
	int **ptr;
	int **array;
	int w = width;
	int h = height;

	array = malloc(sizeof(int) * w * h);

	if (array == NULL)
		return(NULL);

	if (h <= 0 || w <= 0)
		return(NULL);

	ptr = array;
	w = 0;
	h = 0;

	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
		{
			**ptr = 0;
			ptr++;
		}
	}
	return (array);
	free(array);
}
