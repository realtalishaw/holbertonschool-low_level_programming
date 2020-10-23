#include "variadic_functions.h"

/**
 * print_all - fdsfsdf
 * @format: fds
 *
 * Return: fds
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	int n;

	va_start(ap, format);

	n = 0;
	while (format[i])
	{

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			printf("%s", va_arg(ap, char *));
			break;
		default:
			n = 1;
			break;
		}
		if (format[i + 1] && n == 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
