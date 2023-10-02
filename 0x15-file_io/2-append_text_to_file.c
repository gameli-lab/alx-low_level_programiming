#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: file to appent
 * @text_content: content to append
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
		return (-1);
	file = fopen(filename, "a");

	if (file == NULL)
		return (-1);
	fprintf(file, "%s", text_content);

	fclose(file);
	return (1);
}
