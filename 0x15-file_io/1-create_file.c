#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

/**
 * create_file - create file with the file name and puts conten in it
 * @filename: The name of the file to create
 * @text_content: Content to put in the file
 *
 * Return: An integer 1 (Success)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t content_length, bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC | S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		content_length = strlen(text_content);
		bytes_written = write(fd, text_content, content_length);
		if (bytes_written == -1 || bytes_written != content_length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
