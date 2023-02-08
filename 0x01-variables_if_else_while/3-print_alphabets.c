#include <stdlib.h>
#include <stdio.h>

/**
 * This program prints the alphabet in lower and upper case
 *
 */

int main(void)
{
	int alph = 'a';
        int ALPH = 'A';

	while (alph <= 'z')
	{
		putchar(alph);
		alph = alph + 1;   
	}
	while (ALPH <= 'Z')
	{
		putchar(ALPH);
		ALPH = ALPH + 1;
	}
	putchar('\n');
	return (0);
}
