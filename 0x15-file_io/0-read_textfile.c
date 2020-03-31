#include "holberton.h"

/**
 * read_textfile - Read a text file and print it to STDOUT.
 * @filename: Name of the file.
 * @letters: Number of letters into `filename` text.
 * 
 * Return: It returns the number of letters it could read, otherwise 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wr = 0, rd;
	char *str = NULL;

	if (!filename)
		return (wr);

	str = malloc(sizeof(char) * letters);
	if (!str)
		return (wr);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (wr);

	rd = read(fd, str, letters);
	if (rd < 0)
		return (wr);

	wr = write(STDOUT_FILENO, str, rd);

	close(fd);
	free(str);

	return (wr < 0 ? 0 : wr);
}
