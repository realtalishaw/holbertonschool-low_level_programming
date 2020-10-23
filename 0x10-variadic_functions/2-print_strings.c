#include "variadic_functions.h"

/**
 * print_strings - fdlkjfs
 * @separator: fdsfs
 * @n: fjdjs
 *
 * Return: jjfdsjfsd
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *p;

	va_start(strings, n);

	if (!separator)
		separator = "";




	for (i = 0; i < n; i++)
	{
		p = va_arg(strings, char *);
		if (!p)
			p = "(nil)";
		printf("%s", p);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
