#include "holberton.h"

/**
 * _strcmp - gks
 * @s1: lkfsd
 * @s2: djalskd
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{

	for (; (*s1 != 0 && *s2 != 0) && *s1 == *s2; s1++, s2++)
	{
		if (*s1 == 0)
			return (0);
	}
	return (*s2 - *s1);
}
