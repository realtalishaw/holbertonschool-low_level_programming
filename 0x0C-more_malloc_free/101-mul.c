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
		if (!(isdigit(argv[1][2])))
		{
			printf("Error\n");
			exit (98);
		}
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		exit (98);
	}
	return (0);
}
