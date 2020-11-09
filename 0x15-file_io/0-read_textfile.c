#include "holberton.h"

/**
 * read_textfile - kgjgkdfjgdf
 * @filename: kfjkdd
 * @letters: gkjfkjgdf
 *
 * Return: fjdksfs
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd, i;
	int r;

	buff = malloc(sizeof(letters));

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0);
	if (fd == -1)
		return (0);

	r = read(fd, buff, letters);

	for (i = 0; buff[i] != 0; i++)
		_putchar(buff[i]);

	return (r);
}

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
