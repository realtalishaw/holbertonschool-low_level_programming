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
	int c;
	int d = 49;
	int u = 50;

	for (c = 48; c <= 55; ++c)
	{
		for (d = c + 1; d <= 56; ++d)
		{
			for (u = 50; u <= 57; ++u)
			{
			putchar(c);
			putchar(d);
			putchar(u);
				if (c != 55 || d != 56 || u != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
