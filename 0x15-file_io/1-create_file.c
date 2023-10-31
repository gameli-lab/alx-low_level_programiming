#include "main.h"

/**
 * create_file - creates a new file
 * @filename: name of the new file created
 * @text_content: content of the new file created
 * Return: 1 on success else -1
 */

int create_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "w");
	if (file == NULL)
		return (-1);

	fprintf(file, "%s", text_content);
	fclose(file);
	return (1);
}
