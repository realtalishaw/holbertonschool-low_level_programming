#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - gks
 * @s1: lkfsd
 * @s2: djalskd
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{

	for(;(*s1 != 0 && *s2 != 0) && *s1 == *s2; s1++, s2++)
	{
	printf("s1: %c\n", *s1);
	printf("s2: %c\n", *s2);
			   
		if (*s1 == 0)
			return (0);
	}
	printf("us1: %c\n", *s1);
	printf("us2: %c\n", *s2);
       return (*s2 - *s1);
}
