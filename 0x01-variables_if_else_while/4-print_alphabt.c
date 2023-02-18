#include <stdio.h>

/**
 * main - prints alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char fred;

	for (fred = 'a'; fred <= 'z'; fred++)
	{
		if (fred != 'e' && fred != 'q')
			putchar(fred);
	}

	putchar('\n');

	return (0);
}
