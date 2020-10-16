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
	int i;

	for (i = 0; argv[1][i] != 0; i++)
	{
		if (_isdigit(argv[1][i]) == 0)
		{
			printf("Error\n");
			exit(98);
		}
	}

	for (i = 0; argv[2][i] != 0; i++)
	{
		if (_isdigit(argv[2][i]) == 0)
		{
			printf("Error\n");
			exit(98);
		}
	}
	if (argc == 3)
	{
		if (argv[2][i] > 20)
		{
			mul(argv[1], argv[2]);
		}
		 printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	}

	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}

/**
 * _atoi - fdss
 * @str: dss
 *
 * Return: dsd
 */

int _atoi(char *str)
{
	int res = 0;
	int i;

	for (i = 0; str[i] != 0; ++i)
		res = res * 10 + str[i] - '0';

	return (res);
}

/**
 * _isdigit - dasdsa
 * @c:fds
 *
 * Return: sdasdads
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

char *mul(char *num1, char *num2)
{
	int len2;
	int i = 0;
  	size_t sum;
	void *ptr;

	for (len2 = 0; num2[len2]; len2++)
		;

	while(num2[len2]--)
	{
		sum += num1[i] * num2[len2];
		num2 += num2[len2] * 10;
		i++;
	}
	ptr = malloc(sum);

	return (ptr);
}
