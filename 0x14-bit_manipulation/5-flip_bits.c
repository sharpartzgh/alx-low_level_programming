#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: numer of bits
 *
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	int count = 0;

	while (i)
	{
		if (i & 1)
			count++;
		i = i >> 1;
	}
	return (count);
}
