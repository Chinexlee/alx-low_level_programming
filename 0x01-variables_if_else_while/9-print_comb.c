#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints all possible combinations
 * of single-digit numbers.
 *
 * Description: Numbers must be separated by ,
 * should be printed in ascending order
 * can only use the putchar function
 *
 * Return: always equal 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
