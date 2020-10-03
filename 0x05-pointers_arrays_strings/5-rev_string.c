#include "holberton.h"

/**
 * rev_string - fssfds
 * @s: fkdksd
 *
 * Return: jldskfs
 */

void rev_string(char *s)
{
	int len, i;
	char *begin_ptr, *end_ptr, ch;

	for (len = 0; s[len]; len++)
	{
		;
	}
	begin_ptr = s;
	end_ptr = s;

	for (i = 0; i < len - 1; i++)
		end_ptr++;
	for (i = 0; i < len / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;

		begin_ptr++;
		end_ptr--;
	}
}
