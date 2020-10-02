#include "holberton.h"

/**
 * cap_string - kjdadfa
 * @s: fjdkljfs
 *
 * Return: sofjs
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
