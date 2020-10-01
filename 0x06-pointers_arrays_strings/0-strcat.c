#include "holberton.h"

/**
 * _strcat - gkjsgkjw;
 * @dest: kfdjkla
 * @src: fdjkkfjal
 *
 * Return: lkjdalk;f
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len;

	for (len = 0; dest[len] != 0; dest++)
	{
		len++;
	}

	for (i = 0; src[i] != 0; i++)
		dest = &(dest[len]) + src[i];
	return (dest);
}
