#include <stdio.h>

/**
 * main - main point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int longLongType;
	float floatType;

	printf("Size of an char: %ld byte(s)\n", (unsigned long)sizeof(charType));
	printf("Size of a int: %ld byte(s)\n", (unsigned long)sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(longIntType));
	printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(longLongType));
	printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(floatType));
	return (0);
}
