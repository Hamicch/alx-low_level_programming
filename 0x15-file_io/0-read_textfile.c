#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout.
 * Return: The number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;

	letters[468];

	fd = open("filename", O_RDONLY);

	if (!fd || filename == NULL)
	{
		return (0);
		exit (1);
	};

	read = (fd, letters, 468);

	while (fd != EOF)
	{
		printf("%u\n", read);
		read = (fd, letters, 468);
		read = nf;
	};

	close(fd);

	return (0);
}
