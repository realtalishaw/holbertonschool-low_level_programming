#include "holberton.h"

/**
 * print_line - stuff
 * @n: stuff
 *
 * Return: stuff
 */

void print_line(int n)
{
	int a;

	for (a = 0; a <= n; a++)
	{
		if (n > 0)
			_putchar('_');
	}
	_putchar('\n');
}
