#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: pointer to 2D array
 *
 */
void print_chessboard(char (*a)[8])
{
	int eei, aww;

	for (eei = 0; eei < 8; ++eei)
	{
		for (aww = 0; aww < 8; ++aww)
			_putchar(a[eei][aww]);
		_putchar('\n');
	}
}
