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
	int file, bytwt,len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		while (text_content[len])
			len++;

	file = open(filename, O_WRONLY | O_APPEND);

	bytwt = write(file, text_content, len);

	if (file == -1 || bytwt == -1)
		return (-1);

	close(file);
	return (1);
}
