#include "main.h"
/**
 * string_toupper - lowercase to uppercase
 * @str:string
 * Return:char
 */
char *string_toupper(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a' - 'A';
		}
	}
	return (s);
}
