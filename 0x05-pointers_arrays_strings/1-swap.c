#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: int a
 * @b: int b
 */
void swap_in(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
