#include "main.h"
#include <stdio.h>

/**
 * more_numbers - a function that prints 10 times the numbers,
 * from 0 to 14
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
