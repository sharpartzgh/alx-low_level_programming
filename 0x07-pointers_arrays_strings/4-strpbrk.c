#include "main.h"
#define NULL 0

/**
 * _strpbrk - locates the first occurrance in the
 * string s of any of the bytes in the
 * string accept
 *
 * @s: string to search
 * @accept: bytes
 *
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept
 * else, NULL if no such byte is found
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
				return (s + x);
		}
	}
	return (NULL);
}
