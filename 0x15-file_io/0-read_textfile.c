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
	ssize_t nletters;
	int file;
	char *text;

	if (!filename)
		return (0);
	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	nletters = read(file, text, sizeof(char) * letters);
	if (nletters == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	nletters = write(STDOUT_FILENO, text, nletters);
	if (nletters == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	free(text);
	close(file);
	return (nletters);
}
