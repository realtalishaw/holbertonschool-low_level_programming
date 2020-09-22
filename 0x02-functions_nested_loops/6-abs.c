#include "holberton.h"
#include <stdio.h>

/**
 * _abs - main
 * @a: something
 *
 * Return: Answer
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a > 0)
		return (a);
	else
		return (0);
}
