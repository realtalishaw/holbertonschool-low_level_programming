#include "holberton.h"

/**
 * print_diagonal - fldk
 * @n: n
 *
 * Return: stuff
 */

void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			if (a == b)
				_putchar(92);
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
