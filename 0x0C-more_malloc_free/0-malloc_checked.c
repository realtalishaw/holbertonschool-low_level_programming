#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - fdsfd
 * @b: fdjkfls
 *
 * Return: fnfskl
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit (98);

	return (ptr);
}
