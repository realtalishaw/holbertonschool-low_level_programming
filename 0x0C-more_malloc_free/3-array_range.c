#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - ndfdsfs
 * @min: fdsd
 * @max: fsfsd
 *
 * Return: sddas
 */

int *array_range(int min, int max)
{
	int *array;
	int i;


	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = min; min <= max; i++, min++)
		array[i] = min;


	return (array);
}
