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
	int file, bytwt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		while (text_content[len])
			len++;

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytwt = write(file, text_content, len);


	if (file == -1 || bytwt == -1)
		return (0);

	close(file);
	return (1);
}
