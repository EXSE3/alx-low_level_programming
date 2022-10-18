#include "main.h"

/**
 * print_alphabet - Write a function that prints the alphabet,
 * in lowercase, followed by a new line
 * Return: Nothing.
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar('\n');
}
