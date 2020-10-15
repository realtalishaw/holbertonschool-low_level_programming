#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

/**
 * _realloc - fsds
 * @ptr: fdsd
 * @old_size: fds
 * @new_size: fdjskf
 *
 * Return: fdjksf
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptrNew;

	if (new_size == 0 && ptr != 0)
	{
		free (ptr);
		return (NULL);
	}

	else if (!ptr)
	{
		return malloc(new_size);
	}
	else if (new_size <= old_size)
		return (ptr);
	else
	{
		assert((ptr) && (new_size > old_size));
		ptrNew = malloc(new_size);
		if (ptrNew)
		{
			_memcpy(ptrNew, ptr, old_size);
			free(ptr);
		}
		return ptrNew;
	}
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return(dest);
}
