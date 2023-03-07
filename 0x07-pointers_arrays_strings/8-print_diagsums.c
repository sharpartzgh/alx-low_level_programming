#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: 2d array of chars
 *@size: number matrix
*Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, x, j, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		j = (i * size) + i;
		l += *(a + j);
	}
	for (x = 0; x < size; x++)
	{
		j = (x * size) + (size - 1 - x);
		r += *(a + j);
	}
	printf("%i, %i\n", l, r);
}
