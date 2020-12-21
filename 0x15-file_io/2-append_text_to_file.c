#include "holberton.h"

/**
 * append_text_to_file - fdkjfls
 * @filename: fjkdfdfs
 * @text_content: fdjkljs
 *
 * Return: gkjfkldj
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i, w;

	if (!filename)
		return (-1);

	if (!text_content)
		return (1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i] != 0; i++)
		;


	w = write(fd, text_content, i);

	if (w == -1)
		return (-1);

	return (1);
}
