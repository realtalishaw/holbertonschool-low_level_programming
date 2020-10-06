#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - fdmsfs
 * @s: fdsfds
 * @accept: fdsfsd
 *
 * Return: fdssf
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != 0; i++)
	{
		for (n = 0; accept[n] != 0; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (NULL);
}
