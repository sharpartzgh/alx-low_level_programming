#include "main.h"

/**
 * more_numbers - prints more numbers
 */
void more_numbers(void)
{
	int x, y;

	x = 0;

	while (x < 10)
	{
		for (y = 0; y < 15; y++)
		{
			if (y >= 10)
			{
				_putchar((y / 10) + 48);
			}
			_putchar((y % 10) + 48);
		}

		_putchar('\n');

		x++;
	}
}
