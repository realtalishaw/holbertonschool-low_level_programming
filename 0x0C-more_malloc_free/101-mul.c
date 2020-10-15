#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - fds
 * @argc: fds
 * @argv: ddfd
 *
 * Return: dsa
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	}

	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}

int _atoi(char* str)
{
	int res = 0;
	int i;

	for (i = 0; str[i] != 0; ++i)
		res = res * 10 + str[i] - '0';

	return res;
}
