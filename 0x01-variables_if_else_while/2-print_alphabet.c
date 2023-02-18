#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char fred;

	for (fred = 'a'; fred <= 'z'; fred++)
		putchar(fred);

	putchar('\n');

	return (0);
}
