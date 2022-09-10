#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase
 *
 * Description: a program that prints all the numbers of base 16 in lowercase
 * using putchar not more than three times
 *
 * Return: is always equal to 0
 */

int main(void)
{
	int letters;
	char number;

	for (numbers = 0; numbers < 10; numbers++)
		putchar((numbers % 10) +'0');
	for (letters = 'a'; letters <= 'f'; letters++)
		putchar(letters);
	putchar('\n');

	return (0);
}
