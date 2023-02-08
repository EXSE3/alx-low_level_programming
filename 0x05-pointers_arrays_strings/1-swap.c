#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: input int
 * @b: input int
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
	int new;

	new = *a;
	*a = *b;
	*b = new;
}
