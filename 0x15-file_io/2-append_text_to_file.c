#include "holberton.h"

/**
 * append_text_to_file - Append text at the end of a file.
 * @filename: Path of the file.
 * @text_content: Text to append.
 *
 * Return: It returns 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fd, wr = -1;
	size_t len;

	if (!filename)
		return (wr);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (wr);

	len = 0;

	while (text_content && *(text_content + len))
		len++;

	wr = write(fd, text_content, len);

	close(fd);

	return (wr < 0 ? -1 : 1);
}
