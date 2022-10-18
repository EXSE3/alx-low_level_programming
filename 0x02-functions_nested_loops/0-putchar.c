#include "main.h"

/**
 * main -  Write a program that prints _putchar, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char p[] = "_putchar";

	while (i < 8)
	{
		_putchar(p[i]);
		i += 1;
	}
	_putchar('\n');
	return (0);
}
