#include "holberton.h"

/**
 * print_binary - fdfdg
 * @n: fjkgljfd
 *
 * Return: fjhdsgs
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 2147483648;

	if (n == 0)
		_putchar ('0');

xy:
	if (i > 0)
	{
		if ((n & i) == 0)
		{
			i = i >> 1;
			goto xy;
		}
		else
			while (i > 0)
			{
				if ((n & i) == 0)
					_putchar('0');
				else
					_putchar('1');
				i = i >> 1;
			}
	}
}
