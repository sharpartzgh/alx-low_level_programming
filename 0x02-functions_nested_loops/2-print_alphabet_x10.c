#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int fred = 0;
	char af;

	while (fred++ <= 9)
	{
		for (af = 'a'; af <= 'z'; af++)
			_putchar(af);
		_putchar('\n');
	}
}
