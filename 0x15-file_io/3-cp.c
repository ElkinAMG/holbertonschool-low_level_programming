#include "holberton.h"
#include <stdio.h>

#define BUFFER 1024

void sCloser(int fd);

/**
 * main - Copies from a file to another file.
 * @argc: Counter of arguments in argv.
 * @argv: Vector with arguments for command cp.
 *
 * Return: It returns 0 on success, otherwise exit.
 */

int main(int argc, char **argv)
{
	int opF, rdF, wrT, opT;
	char txt[BUFFER];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	opF = open(argv[1], O_RDONLY);
	if (opF < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	opT = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (opT < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	/* READ WITH BUFFER */
	rdF = wrT = 1;
	while (rdF)
	{
		rdF = read(opF, txt, BUFFER);
		if (rdF < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		else
		{
			wrT = write(opT, txt, rdF);
			if (wrT < 0)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
	}

	sCloser(opF);
	sCloser(opT);
	return (0);
}

/**
 * sCloser - Close opened files.
 * @fd: File Descriptor.
 *
 * Return: The descriptor closed.
 */

void sCloser(int fd)
{
	int cls = close(fd);

	if (cls < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", fd);
		exit(100);
	}

}
