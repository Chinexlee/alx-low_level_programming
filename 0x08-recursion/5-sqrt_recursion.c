#include "main.h"

int sqrt(int, int);
/**
 * _sqrt_recursion - function to findnatural square roots
 * @n: integer
 * Return: natural squareroot of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 *_sqrt - recursive square root
 * @n: number
 * @i: iterator
 *
 * Return: a number
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (sqrt(n, (i + 1)));
}