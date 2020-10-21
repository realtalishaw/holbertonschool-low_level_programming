#include "function_pointers.h"

/**
 * int_index - dhklfjdklfsd
 * @array: fdkjfsklfsd
 * @size: fdhfjkfg
 * @cmp: jfkgdf
 *
 * Return: fjdkljfs
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array)
		return (-1);
	if (!cmp)
		return (-1);

	if (size <= 0)
		return (-1);
	if (cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
