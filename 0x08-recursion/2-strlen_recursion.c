#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: string
 *
 * Return: always length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	return (1 + _strlen_recursion(s));
}
