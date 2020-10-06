#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - dfgddf
 * @s: ffdsfds
 * @accept: fdsds
 *
 * Return: dsfd
 */

unsigned int _strspn(char *s, char *accept)
{
	char c, *p, *str;

	for (str = s, c = *str; c != 0; str++, c = *str)
	{
		for (p = accept; *p != 0; p++)
		{
			if (c == *p)
			{
				goto next;
			}
		}
		break;
next:;
	}
	return (str - s);
}
