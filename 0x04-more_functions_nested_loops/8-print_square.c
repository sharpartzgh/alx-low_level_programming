#include "main.h"

/**
 * print_square - prints square
 * @size: square
 */
void print_square(int size)
{
	int p = 0, q;

	if (size > 0)
	{
		for (; p < size; p++)
		{
			for (q = 0; q < size; q++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

