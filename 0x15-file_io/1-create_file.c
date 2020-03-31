#include "holberton.h"

/**
 * create_file - Creates a file.
 * @filename: Name of the file to create.
 * @text_content: Content to maintain into the new file.
 *
 * Return: It returns 1 on success, return -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{

	int n_file, wr = -1, rd = 0;

	if (!filename)
		return (wr);

	n_file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (n_file < 0)
		return (wr);

	while (text_content && *(text_content + rd))
		rd++;

	wr = write(n_file, text_content, rd);

	close(n_file);

	return (wr < 0 ? -1 : 1);
}
