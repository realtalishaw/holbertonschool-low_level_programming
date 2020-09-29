#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - geknlfls
 * @str: string
 *
 * Return: efj
 */

void puts2(char *str)
{
	int i;

	if (str != NULL)
	{
	for (i = 0; str[i] != 0; i += 2)
		_putchar(str[i]);
	_putchar('\n');
	}
	else
		_putchar('\n');
}
