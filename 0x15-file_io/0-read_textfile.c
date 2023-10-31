#include "main.h"

/**
 * read_textfile - reads the contents of a text file
 * @filename: name of the file to be read
 * @letters: number of letters to be read
 * Return: number of letters read else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *rec;
	size_t written, charsRead = 0, totalChars = 0;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	rec = (char *)malloc(sizeof(char) * (letters + 1));
	if (rec == NULL)
		return (0);
	while ((charsRead = fread(rec, 1, letters, file)) > 0)
	{
		written = fwrite(rec, 1, charsRead, stdout);
		if (written != charsRead)
		{
			free(rec);
			fclose(file);
			return (0);
		}
		totalChars += charsRead;
		if (totalChars >= letters)
			break;
	}
	if (ferror(file))
	{
		fclose(file);
		return (0);
	}
	free(rec);
	fclose(file);
	return (totalChars);
}
