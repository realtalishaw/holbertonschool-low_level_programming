#include "holberton.h"

/**
 * set_bit - jfdkjfsd
 * @n: fjdlsjfklds
 * @index: gjkflfls
 *
 * Return: dlfjlfkds
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 64)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
