#include "main.h"

/**
 * main - program that prints Holberton.
 *
 * Return: int
 */

int main(void)
{
	int i = 0;
	char strng_ptchr[8] = "_putchar";

	while (i < 8)
	{
		_putchar(strng_ptchr[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
