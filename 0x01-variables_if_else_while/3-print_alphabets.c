#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char fred;

	for (fred = 'a'; fred <= 'z'; fred++)
		putchar(fred);

	for (fred = 'A'; fred <= 'Z'; fred++)
		putchar(fred);

	putchar('\n');

	return (0);
}
