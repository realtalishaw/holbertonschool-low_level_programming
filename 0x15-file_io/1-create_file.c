#include "holberton.h"

/**
 * create_file - fdkjfls
 * @filename: fjkdfdfs
 * @text_content: fdjkljs
 *
 * Return: gkjfkldj
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int i, w;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TURNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	for (i = 0; text_content[i]; i++)
		;

	w = write(fd, text_content, i);
	close(fd);

	if (w == -1)
		return (-1);


	return (1);
}
