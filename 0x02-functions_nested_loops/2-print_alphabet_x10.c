#include "main.h"

/**
 * print_alphabet_x10 - Write a function that prints the alphabet,
 * in lowercase, followed by a new line
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 97; i < 123; i++)
			_putchar(i);
		_putchar('\n');
		j++;
	}
}
