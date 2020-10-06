#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - fdskhkj
 * @c: fdjfsdf
 * @s: ghjljlk
 *
 * Return: fds
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; s++)
	{
		if (s[i] == c)
			return (s);
	}

	return (s);
	return (NULL);
}
