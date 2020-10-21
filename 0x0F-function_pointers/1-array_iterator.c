#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - fdds
 * @array: fdsds
 * @size: fdssd
 * @action: fdsds
 *
 * Return: fds
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!action)
		return;
	if (action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
