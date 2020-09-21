#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */


int main(void)
{
	char H[] = "Holberton";
	int i;

	for (i = 0; H[i] != 0; i++)
		_putchar(H[i]);
	_putchar('\n');
	return (0);
}
