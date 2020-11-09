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
	char *buff;
	int fd;
	int i;

	if (!filename)
		return (-1);


	buff = malloc(sizeof(text_content));

	if (!buff)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT, 0600);

	for (i = 0; text_content[i] != 0; i++)
	{
		buff[i] = text_content[i];
	}
	buff[i + 1] = '\0';

	write(fd, buff, *text_content);


	return (1);
}
