#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Description: Write a program that prints the alphabet in
 * lowercase, followed by a new line.
 * Return: Always equals to 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter != 'e' && letter != 'q')
	{
		putchar(letter);
	}
	}
	putchar('\n');

	return (0);
}
