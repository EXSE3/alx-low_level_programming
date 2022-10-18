#include "main.h"

/**
 * print_sign - function that checks the sign of the number
 * @n: input character
 * Return: 1 if n is positive -1 if nis negative and 0 if the number equal zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar(n);
		_putchar('\n');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar('n');
		_putchar('\n');
		return (-1);
	}
	else
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(n);
		_putchar('\n');
	}	return (0);
}
