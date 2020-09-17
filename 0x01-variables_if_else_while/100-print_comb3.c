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
	int  n = '0';
	int i = '1';

	for (; n  < '9'; n++)
	{
		while (i < '9')
		{
			if (n != i)
			{
				if (i > n)
				{
					putchar(n);
					putchar(i);
					if (n < 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			i++;
		}
		i = '0';
	}
	putchar('\n');
	return (0);
}
