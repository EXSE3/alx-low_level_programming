#include "main.h"

/**
 * main - Write a function that prints the alphabet,
 * in lowercase, followed by a new line
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	for (int i = 97; i < 123; i++)
		_putchar(i);
	_putchar('\n');
}
