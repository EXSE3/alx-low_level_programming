#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s: input char
 * Return: nothing.
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
