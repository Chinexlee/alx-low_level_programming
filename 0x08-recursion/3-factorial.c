#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: integer
 *
 * Return: the factorial of n
 */

int factorial(int n)
{
	/* base case*/
	if (n < 0)
		return;
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
