#include "holberton.h"

/**
 * flip_bits - fjkjgdlksfd
 * @n: fjdksf
 * @m: jfkdfflkd
 *
 * Result: fjkjdfs
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_bits(n^m));


}

/**
 * count_bits - fjkdkljfs
 * @n: fjdkfs
 * @m: fjkdksfs
 *
 * Result: fjdksjs
 */

int count_bits(int n)
{
	int count;

	for (count = 0; n > 0; count++)
		n &= (n - 1);

	return (count);
}
