#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase. followed by a newline
 * description done by FREDRICK
 * return: void
 */

void print_alphabet(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
