#include "holberton.h"

/**
 * _strncat - fjlkjgsl
 * @dest: fdljs
 * @src: glklkdgjs
 * @n: fdahfjakl
 *
 * Return: kjdaklf
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len;

	for (len = 0; dest[len] != 0;)
	{
		len++;
	}

	for (i = 0; i < n && src[i] != 0; i++)
		dest[len + i] = src[i];
	dest[len + i] = 0;
	return (dest);
}
