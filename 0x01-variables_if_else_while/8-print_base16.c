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
	char a = '0';
	char A = 'a';

	for (; a <= '9'; a++)
	{
		putchar(a);
		}
	for (; A <= 'f'; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
