#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -  program that prints all single digit numbers of
 * base 10 starting from 0
 *
 * Description : char, printf and puts are not allowed
 * making use of putchar
 *
 * Return: always equal to zero
 */

int main(void)
{
	int digit;
	for (digit = 0; digit < 10; digit++)
	{
		putchar((digit % 10) + '0');
	}
	putchar('\n');
	return (0);
}
