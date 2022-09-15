#include "main.h"
#include <stdio.h>

/**
 * _isupper - a function that checks for uppercase character.
 * @c: integer c
 *
 * Return: 1 if c is uppercase, 0 if lowrcase
 */

int _isupper(int c)
{
	if ((c > 'A') && (c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
