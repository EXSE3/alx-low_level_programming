#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
	int alph = 'a';

	while (alph <= 'z')
	{
		if (alph == 'e' || alph == 'q')
		{
			alph += 1;
		}
		else
		{
			putchar(alph);
			alph += 1;
		}
	}
	putchar('\n');
	return (0);
}
