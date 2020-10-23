#include "variadic_functions.h"

/**
 * sum_them_all - fdkljfsdfds
 * @n: jfdsfds
 *
 * Return: fdsfds
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, unsigned int);

	va_end(valist);
	return (sum);
}
