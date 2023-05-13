#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - append to a file
 * @filename: The name of the file
 * @text_content: Pointer to the content to append
 *
 * Return: 1 (Success) or -1 (Failed)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int result;
	FILE *file;

	if (filename == NULL)
		return -1;

	if (text_content == NULL)
		return -1;

	file = fopen(filename, "a");
	if (file == NULL)
		return -1;

	result = fputs(text_content, file);
	if (result == EOF)
	{
		fclose(file);
		return -1;
	}

	fclose(file);
	return 1;
}
