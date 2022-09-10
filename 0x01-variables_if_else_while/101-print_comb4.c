#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints all possible different
 * combinations of three digits
 *
 * Description: Numbers must be separated by ,
 * followed by a space
 * 012, 120, 102, 021, 201, 210 are considered the
 * same combination of the three digits 0, 1 and 2
 *
 * Return: always equals to 0
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 56; i++)
	{
		for (j = i + 1; j < 57; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

