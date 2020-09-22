#include "holberton.h"

/**
 * print_last_digit - dlfjsl;
 * @a: dfjsd
 *
 * Return: 0
 */

int print_last_digit(int a)
{
	int num = a % 10;

	if (num < 0)
	{
		num = num * -1;
		_putchar(num + '0');
		return (num);
	}
	else if (num == 0)
	{
		_putchar(num + '0');
		return (0);
	}
		else
			_putchar(num + '0');
	return (num);
}
