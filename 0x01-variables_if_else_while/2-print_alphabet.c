#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the program in lowercase followed
 * by a new line.
 *
 * Description: a program that prints the alphabet in
 * lowercase, followed by a new line.
 * return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
