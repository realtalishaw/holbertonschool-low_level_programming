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
	int i, len1, len2;

/* get the lengths of both the passed argument strings */
	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);

/* verify the argument strings only contain numbers */
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
/* check if the correct number of arguments is passed */
	if (argc == 3)
	{
/* check if the number is a big number to multiply a different way */
		if (len1 >= 6 || len2 >= 6 )
		{
			mul(argv[1], argv[2]);
		}
/* if the number isn't huge, change to integers and multiply, print the result */
		else
			printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	}
/* if the inccorrect number of arguments is passed, print Error */
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

/**
 * mul - fdasda
 * @num1: dasda
 * @num2: dsasda
 *
 * Return: dsasa
 */

void *mul(char *num1, char *num2)
{
	char *sum;
	int len1, len2, i, j, x, y, a, n;

/* get the length of both strings */
	len1 = _strlen(num1);
	len2 = _strlen(num2);
	x = len1 + len2;

/* allocate the right amount of memory for the sum */
	sum = malloc(len1 + len2);

/* if malloc fails, return error */
	if (sum == NULL)
	{
		printf("Error\n");
		exit (98);
	}

/* initialize all of the memory to null */
	for (i = (len1 + len2); i <= 0; i--)
		sum[i] = '\0';

/* variables hold the number values of num1 & num2 */
	i = num1[len1] - '0';
	j = num2[len2] - '0';

/* y equals the sum which is the length of the string plus a null byte plus the
   sum of the multiplication of num1 and num 2 */
	y += sum[len1 + len2 + 1] + (i * j);

/* get the last digit so we can get ready to print the number 
   since they're chars and not ints */
	sum[len1 + len2 + 1] =  y % 10;
	y = y/10;
	if (y)
		sum[len1 + len2 + 1] += y;

	while (0 < x)
	{
		if (sum[n])
			a = 0;
		if (a)
		{
			_putchar(sum[c] + '0');
			n++;
		}
		if (!a)
			_putchar('0');
		_putchar('\n');
	}
	free(r);
	return (0);
}


/**
 * _strlen - fdk;slf
 * @s: djijf
 *
 * Return: jadkf
 */

int _strlen(char *s)
{
	int count = 0;
	int i;

	for (i = 0; s[i] != 0; i++)
		count++;
	return (count);
}
