#include "main.h"

/**
 * _isalpha - checks for an alphabet character
 * @c: character to be checked
 *
 * Return 1 if c is a letter' 0 otherwise
 */

int _isalpha(int c)
{
	int lower = (c >= 'a' && c <= 'z');
	int upper = (c >= 'A' && C <= 'Z');

	if (lower || upper)
		return (1);
	else
		return (0);
}
