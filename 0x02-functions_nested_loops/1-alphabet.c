#include "main.h"

/**
 * main - a function that prints the alphabet, in lowercase,
 * followed by a new line.
 *
 * Description: a function that prints the alphabet, in lowercase,
 * followed by a new line.
 * Return: always equals to zero
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}
