#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char fred;

	for (fred = 'z'; fred >= 'a'; fred++)
		putchar(fred);

	putchar('\n');

	return (0);
}
