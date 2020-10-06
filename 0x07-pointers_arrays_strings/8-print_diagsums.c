#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - fdsdfs
 * @a : apo
 * @size: fddsdfs
 *
 * Return: fdsfda
 */

void print_diagsums(int *a, int size)
{
	int i, n, sum, total;

	sum = 0;
	total = 0;

	for (i = 0; i < size;)
	{
		sum += a[i];
		n += size + 1;
		i++;
	}
	n = size - 1;
	for (i = 0; i < size;)
	{
		total += a[n];
		n += size - 1;
		i++;
	}
	printf("%d, %d\n", sum, total);
}
