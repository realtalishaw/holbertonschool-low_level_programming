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

	for (; n  <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	return (0);
}
