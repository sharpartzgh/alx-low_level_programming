#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of file
 * @letters: number of letters
 *
 * Return: actual number of letters it could read and print
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t read_len;
	ssize_t write_len;

	if (filename == NULL || letters == 0)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);
	read_len = read(file, buffer, letters);
	if (read_len == -1)
		return (0);
	write_len = write(STDOUT_FILENO, buffer, read_len);
	free(buffer);
	close(file);
	if (read_len != write_len)
		return (0);
	return (write_len);
}
