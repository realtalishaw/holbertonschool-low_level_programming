#include "holberton.h"

/**
 * main - gkjfd
 * @ac: gjfsd
 * @av: jfdkfj
 *
 * Return: fdlksd
 */

int main(int ac, char **av)
{
	int fd, fd1;
	int in, out;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]
			), exit(98);
	}

	fd1 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write  to %s\n", av[2]);
		exit (99);
	}
	in = out = 1;

	while (in)
	{
		in = read(fd, buff, 1024);
			if (in > 0)
			{
				out = write(fd1, buff, in);
				if (out == -1)
					dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
				exit (99);
			}
	}
	out = close(fd);

	if (out == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close to fd %d\n", fd);
		exit (100);
	}
	out = close(fd1);
	if (out == -1)
	{
		dprintf (STDERR_FILENO, "Error: can't close to fd %d\n", fd1);
		exit (100);
	}
	return (0);
}
