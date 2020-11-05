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
	if (!n)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);

	else
		return (-1);
}
