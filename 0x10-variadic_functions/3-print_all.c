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
	char const *p;

	va_start(ap, format);
	p = format;


	while(*p)
	{

		switch(*++p)
		{
		case 'c':
			printf("%c, ", va_arg(ap, int));
		case 'i':
			printf("%d, ", va_arg(ap, int));
		case 'f':
			printf("%f, ", va_arg(ap, double));
		case 's':
			printf("%s, ", va_arg(ap, char *));
		default:
		      continue;
		}
		p++;
	}
	printf("\n");
}
