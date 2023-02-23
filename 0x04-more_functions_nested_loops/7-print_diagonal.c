#include "main.h"

/**
 * print_diagonal - print slash
 * @k: diagonal
 */
void print_diagonal(int k)
{
	int p = 0;
	int q;

	if (k > 0)
	{
		for (; p < k; p++)
		{
			for (q = 0; q < p; q++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
