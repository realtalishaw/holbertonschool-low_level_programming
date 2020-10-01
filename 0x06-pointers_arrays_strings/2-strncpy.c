#include "holberton.h"

/**
 * _strncpy - kdjfa
 * @dest: rgsjjflsjg
 * @src: fldk;lfs
 * @n: kjfslkjfa
 *
 * Return: jkfksll
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = 0;
	return (dest);
}
