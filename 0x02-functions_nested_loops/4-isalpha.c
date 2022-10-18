#include "main.h"

/**
 * _isalpha - function that checks for
 * lowercase and uppercase character.
 * @c: input character
 * Return: 1 if lowercase or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
