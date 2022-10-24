#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: input int
 * @b: input int
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int *n = *a;
	*a = *b;
	*b = *n;
}

