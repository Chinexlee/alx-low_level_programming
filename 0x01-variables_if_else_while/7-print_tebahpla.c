#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a script that print alphabets in reverse
 *
 * Description: using putchar i will be 
 * printing alphabets in lowercase in reverse.
 *
 * Return: is always equal to 0
 */

int main(void)
{
	char letters;

	for (letters = 'z'; letters > 'a' ;letters--)
		putchar(letters);
	
	putchar('\n');

	return (0);
}
