#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - fdsf
 * @s1: fdsdsf
 * @s2: fdfdgd
 * @n: fddgdf
 *
 * Return: dsfsd
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *both;
	int i, len;
	unsigned int j;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len = 0; s2[len] != 0; len++)
		;

	both = malloc(*s1 + ((len + 1) + n));

	if (both == NULL)
		return (NULL);

	for (i = 0; s1[i] != 0; i++)
		both[i] = s1[i];

	for (j = 0; j <= n; j++)
		both[i + j] = s2[j];

	return (both);
}
