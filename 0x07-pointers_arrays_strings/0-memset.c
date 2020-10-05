#include "holberton.h"

/**
 * _memset - efjs
 * @s: fkjds
 * @b: fkjd
 * @n: fkds
 *
 * Return: fekj
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
