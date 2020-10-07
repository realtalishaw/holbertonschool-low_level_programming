#include "holberton.h"

/**
 * _puts_recursion - afds
 * @s: gkjdslkjgs
 *
 *  Return: fsjaks
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
			_putchar(*s);
	}
	if (*s == '\0')
	{
		_putchar('\n');
		      return;
	}
	_puts_recursion(s + 1);
}
