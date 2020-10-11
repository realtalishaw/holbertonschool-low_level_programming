#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - fdgd
 * @argc: fda
 * @argv: fdsfds
 *
 * Return: fdasd
 */

int main(int argc, char *argv[])
{
	int i;
	int n;
	int sum;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			for (n = 0; argv[i][n] != 0; n++)
			{
				if(!(isdigit(argv[i][n])))
				{
					printf("Error\n");
					return (1);
				}
			sum += atoi(*(argv + i));
			}
		}
	}
	else
	{
		printf("0");
		return (0);
	}
	printf("%d\n", sum);
	return (0);
}
