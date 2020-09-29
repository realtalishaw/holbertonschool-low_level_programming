#include "holberton.h"

/**
 * puts_half - jeljfa
 * @str: ing
 *
 * Return: fkajfail
 */

void puts_half(char *str)
{
	int a = _strlen(str);
	int i;
	int n = (_strlen(str)-1)/2;

	if (a%2 != 0)
	{
		for ( i = n; str[i] != 0; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = a/2; str[i] != 0; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}

int _strlen(char *s)
{
	int count = 0;
	int i;

	for (i = 0; s[i] != 0; i++)
		count++;
	return (count);
}
