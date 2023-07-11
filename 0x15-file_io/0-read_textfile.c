#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints to POSIX
 * @filename: The name of the file
 * @letters: Character in the file
 * Return: Written charcters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_desc, byte_written, byte_read;

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	byte_read = read(file_desc, buffer, letters);
	byte_written = write(STDOUT_FILENO, buffer, byte_read);

	free(buffer);
	close(file_desc);
	return (byte_written);
}
