#include <stdio.h>
/**
 * main - A program that prints sizes of various types of data
 *
 * Return:0(Success)
 */
int main(void)
{
	int i;
	char c;
	long int u;
	long long int d;
	float f;

	printf("Size of an int: %i byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a char: %c byte(s)p\n", (unsigned long)sizeof(c));
	printf("Size of a long int: %u byte(s)\n", (unsigned long)sizeof(u);
	printf("Size of long long int: byte(s)\n", (unsigned long)sizeof(d);
	printf("Size of float:%f byte(s)\n", (unsigned long)sizeof(f);
	return (0);
}
