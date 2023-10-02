#include "main.h"

/**
 * create_file - creates a new file
 * @filename: name of the new file
 * @text_content: content of the file
 *
 * Return: 1 on success otherwise -1
 */


int create_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "w");

	if (file == NULL)
		return (0);

	if (text_content != NULL)
	{
		if (fprintf(file, "%s", text_content) < 0)
		{
			fclose(file);
			return (-1);
		}
	}
	fclose(file);
	if (chmod(filename, S_IRUSR | S_IWUSR) != 0)
		return (-1);
	return (1);
}
