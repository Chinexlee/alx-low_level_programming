#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints alphabets in lowercase and uppercase
 *
 * Description - using putchar we want to print
 * alphabet in lowercase and uppercase.
 *
 * Return : Always equals 0
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	return (0);
}
