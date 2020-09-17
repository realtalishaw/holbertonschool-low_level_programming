#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- Short description, single line
 * Description: Longer description of the function)?
 * section header: Section description)
 * Return: Description of the returned value
 */

int main(void)
{
	int i;
	int u = 0;
	int j = 49;

	for (i = 48; i <= 56; i++)
	{
		for (; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar (44);
				putchar (32);
			}
		}
		u++;
		j = 49 + u;
	}
	putchar('\n');
	return (0);
}
