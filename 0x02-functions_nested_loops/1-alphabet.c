#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		_putchar(alp);

	_putchar('\n');
}
