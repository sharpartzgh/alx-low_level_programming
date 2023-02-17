#include <stdio.h>
/**
 * main - A program that prints sizes of various types of data
 *
 * Return:0(Success)
 */
int main(void)
{
	char d;
	int a;
	long int b;
	long long int c;
	float f;

	printf("Size of a char: %lu byte(s)p\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of long long int: %lu  byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
