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
	char *buff;
	int fd;
	int i;

	if (!filename)
		return (-1);


	buff = malloc(sizeof(text_content));

	if (!buff)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND );

	for (i = 0; text_content[i] != 0; i++)
	{
		buff[i] = text_content[i];
	}
	buff[i + 1] = '\0';

	write(fd, buff, *text_content);


	return (1);
}
