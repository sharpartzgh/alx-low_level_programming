#include "main.h"

int _string_len(char *s);
/**
 * create_file - creates a file
 *
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 *
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int length = 0;
	int write_len = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		length = _string_len(text_content);
		write_len = write(file, text_content, length);
	}
	if (write_len == -1)
		return (-1);
	close(file);
	return (1);
}

/**
 * _string_len - get the length of a string
 *
 * @s: string
 *
 * Return: length of string
 *
 */
int _string_len(char *s)
{
	int len;

	len = 0;
	while (*(s + len))
		++len;
	return (len);
}
