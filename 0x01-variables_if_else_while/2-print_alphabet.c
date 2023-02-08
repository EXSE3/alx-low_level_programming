#include <stdlib.h>
#include <stdio.h>

/**
 * This program prints a the alphabet in lowercase
 * followed by a new line.
 *
 */

int main(void)
{
	int alph = 'a';
	
	while (alph <= 'z')
	{
		putchar(alph);
		alph = alph + 1;    
	}
	putchar('\n');
	return (0);
}
