#include "main.h"

/**
 * read_textfile - reads content of text files
 * @filename: name of the file to be read
 * @letters: length of the letters to be read
 *
 * Return: letters printed otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	size_t lets = 0, bytrd, bytwt;
	char buff[1];

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	while (lets < letters)
	{
		bytrd = read(file, buff, 1);
		if (bytrd == 0)
			break;
		else if ((int)bytrd == -1)
		{
			close(file);
			return (0);
		}
		bytwt = write(STDOUT_FILENO, buff, 1);
		if (bytwt != 1)
		{
			close(file);
			return (0);
		}
		lets++;
	}
	close(file);
	return (lets);
}
