#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first integer
 * @b: pointer to second integer
 */
void swap_int(int *a, int *b)
{
	int fred;

	fred = *a;
	*a = *b;
	*b = fred;
}
