#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: pointer to the string to check
 * Return: (0) Success
 */


int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
