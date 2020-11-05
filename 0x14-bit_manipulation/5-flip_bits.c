#include "holberton.h"

/**
 * flip_bits - fjkjgdlksfd
 * @n: fjdksf
 * @m: jfkdfflkd
 *
 * Return: fjkjdfs
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	if (n == 0)
		return (0);

	return (count_bits(n ^ m));


}

/**
 * count_bits - fjkdkljfs
 * @n: fjdkfs
 *
 * Return: fjdksjs
 */

int count_bits(int n)
{
	int count;

	for (count = 0; n > 0; count++)
		n &= (n - 1);

	return (count);
}
