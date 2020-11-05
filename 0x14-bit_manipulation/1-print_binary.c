#include "holberton.h"
/**
 * print_binary - fdfdg
 * @n: fjkgljfd
 *
 * Return: fjhdsgs
 */
void print_binary(unsigned long int n)
{
	unsigned long int range = 2147483648;

	if (n == 0)
		_putchar ('0');
xy:
	if (range > 0)
	{
		if ((n & range) == 0)
		{
			range = range >> 1;
			goto xy;
		}
		else
			while (range > 0)
			{
				if ((n & range) == 0)
					_putchar('0');
				else
					_putchar('1');
				range = range >> 1;
			}
	}
}
