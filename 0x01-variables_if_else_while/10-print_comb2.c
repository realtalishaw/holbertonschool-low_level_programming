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
	int i = '0';

	for (; n  <= '9'; n++)
	{
		for (; i <= '9'; i++)
		{
			putchar(n);
			putchar(i);
			if (n != '9' || i != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
		i = '0';
	}
	putchar('\n');
	return (0);
}
