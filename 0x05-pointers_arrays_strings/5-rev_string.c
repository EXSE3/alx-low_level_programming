#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: input string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int occ1;
	char occr2;

	while (*(s + i) != '\0')
		i++;
	i--;

	while (occ1 < i)
	{
		occr2 = s[i];
		s[i] = s[occ1];
		s[occ1] = occr2;
		occ1++;
		i--;
	}
}
