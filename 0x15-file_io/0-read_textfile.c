#include "main.h"

/**
 * read_textfile - reads text files
 * @filename: file to be read
 * @letters: number of letters read
 * Return: returns number of chars read else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t charsread, total;
	char *buffer = malloc(sizeof(char) * letters);
	int file = open(filename, O_RDONLY);

	if (file == -1)
		exit(EXIT_FAILURE);

	charsread = read(file, buffer, letters);
	total = write(STDOUT_FILENO, buffer, charsread);

	if (charsread == (size_t)-1)
	{
		perror("Error reading file");
		close(file);
		exit(EXIT_FAILURE);
	}
	free(buffer);
	close(file);
	return (total);
}
