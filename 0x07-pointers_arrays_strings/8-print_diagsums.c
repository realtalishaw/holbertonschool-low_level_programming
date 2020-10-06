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

	for (i = 0; i < size; i++)
	{
		sum += a[n];
		n += size + 1;
	}
	for (i = 0, n = size - 1; i < size; i++)
	{
		total += a[n];
		n += size - 1;
	}
	printf("%d, %d\n", sum, total);
}
