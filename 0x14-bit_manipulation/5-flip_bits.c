#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *		to get from one number to another
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);
{
	unsigned long int fred = n ^ m;
	unsigned int count = 0;

	while (fred)
	{
		if (fred & 1)
			count++;
		fred >>= 1;
	}
	return (count);
}
