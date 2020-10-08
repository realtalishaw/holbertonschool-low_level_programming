#include "holberton.h"

/**
 * factorial - something
 * @n: fds
 *
 * Return: dsaad
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
