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
	FILE *file;
	size_t lets = 0;
	int c;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	while (lets < letters)
	{
		c = fgetc(file);
		if (c == EOF)
			break;
		if (write(1, &c, 1) == EOF)
		{
			fclose(file);
			return (0);
		}
		lets++;
	}
	if (ferror(file))
	{
		fclose(file);
		return (0);
	}
	fclose(file);
	return (lets);
}
