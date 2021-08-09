#include "main.h"
#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX stdout
 * @filename: Name of the file that's read
 * @letters: The number of letters read and printed
 * Return: The number of letters it could read and print, 0 if file cannot
 * be printed or read, 0 if @filename is NULL, 0 if write fails or doesn't
 * write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, _read, _write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 600);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	_read = read(fd, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		return (0);
	}

	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1 || _write != _read)
	{
		return (0);
	}

	free(buffer);
	close(fd);
	return (_write);
}
