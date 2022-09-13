#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - a function that computes the absolute value of an integer
 * @c: integer needed to be checked
 *
 * Description: a function that computes the absolute value of an integer
 * Return: is equal to the absolute of c
 */

int _abs(int c)
{
	if (c == 0 || c > 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
