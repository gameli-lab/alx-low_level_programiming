#include "main.h"

/**
 * append_text_to_file - appends text to existing file
 * @filename: name of file to be appended
 * @text_content: content to append
 * Return: 1 on success else -1
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
