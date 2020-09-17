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
	char a = 'a';

	for (; a <= 'z'; a++)
	{
		if  (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
