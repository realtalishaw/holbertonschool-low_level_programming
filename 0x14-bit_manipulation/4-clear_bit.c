#include "holberton.h"

/**
 * clear_bit - fedklfak
 * @n: fhjdjs
 * @index: hjfgjd
 *
 * Return: dsfjdsfs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 64)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);

}
