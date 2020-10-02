#include "holberton.h"

/**
 * reverse_array -fjal
 * @a: fkjdsl
 * @n: jfeakl
 *
 * Return: djkla
 */

void reverse_array(int *a, int n)
{
	int tmp = 0;
	int i;

	n = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i];
		a[n - i] = tmp;
	}
}
