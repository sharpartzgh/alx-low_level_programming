#include "main.h"

int _string_len(char *s);
/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int len;
	int write_len;

	file = open(filename, O_WRONLY | O_APPEND);
	if (filename == NULL)
		return (-1);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = _string_len(text_content);
		write_len = write(file, text_content, len);
	}
	if (write_len == -1)
		return (-1);
	close(file);
	return (1);
}

/**
 * _string_len - gets the length of a string
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
