#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers,
 * from 0 to 9
 *
 * Return: always zero
 */

void print_most_numbers(void)
{
	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		putchar('\n');
	}
	putchar(10);
}
