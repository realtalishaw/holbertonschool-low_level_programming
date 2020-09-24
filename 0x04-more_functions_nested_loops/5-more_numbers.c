#include "holberton.h"

/**
 * more_numbers - main
 *
 * Return: dfja
 */

void more_numbers(void)
{
	int n;
	int i;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
