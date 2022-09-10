#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints all single digit numbers
 * of base 10 starting from 0
 *
 * Description: a program that prints all single digit numbers of base 
 * 10 starting
 *
 * Return: always equals to 0
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		printf("%d", digit);

	printf("\n");

	return (0);
}
