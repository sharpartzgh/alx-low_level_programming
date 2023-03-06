#include "main.h"
#define NULL 0

/**
 * _strchr - locates a chracter in a string
 *
 * @s: string to search
 * @c: character to locate
 *
 * Return:pointer to the first occurrence of the character c
 * in the string s else,
 * NULL if the character is not foud
 *
 */
char *_strchr(char *s, char c)
{
	int x;

	x = 0;
	while (s[x] != '\0' && s[x] != c)
		++x;
	if (s[x] == c)
		return (&s[x]);
	else
		return (NULL);
}
