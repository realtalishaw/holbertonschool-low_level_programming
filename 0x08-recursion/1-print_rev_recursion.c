#include "holberton.h"

/**
 * _print_rev_recursion - dafdsgs
 * @s: dfgfgsdgs
 *
 * Return: fd
 */

void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	if (*s == 0)
		return;
}
