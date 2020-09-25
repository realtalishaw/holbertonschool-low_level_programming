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
			if (b == a)
			{
				_putchar(92);
				break;
			}
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
