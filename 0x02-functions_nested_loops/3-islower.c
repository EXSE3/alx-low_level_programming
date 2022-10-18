#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 * @c: input character
 * Return: 1 if lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 || c <= 122)
		return (1);
	return (0);
}
