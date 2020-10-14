#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - fdsgs
 * @grid: fdgsd
 * @height: fdsgdfs
 *
 * Return: dsffsd
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(griad[i]);
	free(grid);
}
