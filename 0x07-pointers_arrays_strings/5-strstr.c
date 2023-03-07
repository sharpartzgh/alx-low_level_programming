#include "main.h"
#define NULL 0

/**
 * _strstr - finds the first occurance of the substring needle in the haystack
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to beginning of located substring
 * else NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	x = y = 0;
	while (haystack[x])
	{
		while (needle[y])
		{
			if (haystack[x + y] != needle[y])
				break;
			++y;
		}
		if (needle[y] == '\0')
			return (haystack + x);
		y = 0;
		++x;
	}
	return (NULL);
}
