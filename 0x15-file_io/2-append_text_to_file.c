#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file to append
 * @text_content: content to append
 * Return: 1 on success else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int numrd, charrd, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		while (text_content[len])
			len++;
	numrd = open(filename, O_WRONLY | O_APPEND);
	charrd = write(numrd, text_content, len);

	if (numrd == -1 || charrd == -1)
		return (-1);
	close(numrd);
	return (1);
}

