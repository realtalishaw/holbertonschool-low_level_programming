#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - fgdd
 * @argv: fjksd
 * @argc: fjgdf
 *
 * Return: gjflkjd
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int c, int d);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (b == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}


	f = get_op_func(argv[2]);

	if (!f && argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '/' &&
	    argv[2][0] != '%' && argv[2][0] != '*')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", f(a, b));
	return (0);
}
