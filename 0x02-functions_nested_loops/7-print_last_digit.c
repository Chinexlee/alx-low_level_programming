#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - a function that prints the last digit of a number
 * @c: integer whose value is unknown
 *
 * Description: a function that prints the last digit of a number
 * Return: the value of the last digit
 */

int print_last_digit(int c)
{
	int i;

	i = c % 10;

	if (i < 0)
		i *= -1;
	_putchar(i + '0');

	return (i);
}
