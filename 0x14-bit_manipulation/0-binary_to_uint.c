#include "holberton.h"

/**
 * binary_to_uint - fdsfdgsgs
 * @b: fkjdkgfs
 *
 * Return: fjdls
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;

	if (b)
	{
		for (i = 0; *b; b++)
		{
			if (_isdigit(*b) == 0)
				return (0);
			else if (*b == '1')
				i = (i << 1) | 1;
			else if (*b == '0')
				i <<= 1;
			else
				break;
		}
	}
	return (i);
}
/**
 * _isdigit - dasdsa
 * @c:fds
 *
 * Return: sdasdads
 */

int _isdigit(int c)
{

	return (c >= '0' && c <= '9');
}
