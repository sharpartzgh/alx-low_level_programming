#include "main.h"

/**
 * print_line - prints line
 * @k: line
 */
void print_line(int k)
{
	int b = 1;

	while (b <= k)
	{
		_putchar(95);
		b++;
	}
	_putchar('\n');
}

