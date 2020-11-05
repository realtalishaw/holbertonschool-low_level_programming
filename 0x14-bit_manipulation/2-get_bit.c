#include "holberton.h"

/**
 * get_bit - gfdgfdd
 * @n: fdfsds
 * @index: fjklljs
 *
 * Return: fjdkfsk
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int  result;

	if (index > 64)
		return (-1);

	result =  (n >> index) & 1;

	return (result);


}
