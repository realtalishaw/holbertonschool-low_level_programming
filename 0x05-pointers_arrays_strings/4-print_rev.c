#include "holberton.h"

/**
* print_rev - ekdjlsk
* @s: ejsekf
*
* Return: fjkhdsk
*/

void print_rev(char *s)
{
	int len, i;

	for (len  = 0; s[len] != 0; len++)
	{
		_putchar(s[len]);

	}
	_putchar('\n');
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
