#include "variadic_functions.h"

/**
 * print_numbers - fdsfds
 * @separator: gjfkljs
 * @n: fdsfd
 *
 * Return: jfkds
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	if (!separator)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
