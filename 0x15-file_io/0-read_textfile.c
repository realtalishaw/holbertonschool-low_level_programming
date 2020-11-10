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
	int fd;
	int r, w;

	buff = malloc(sizeof(char) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	r = read(fd, buff, letters);
	if (r == -1)
	{
		free(buff);
		return (0);
	}

	w = write(STDOUT_FILENO, buff, r);

	if (r != w)
		return (0);
	free(buff);
	close(fd);
	return (r);
}
