#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints all possible combinations
 * of two two-digit numbers.
 *
 * Description: he numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * numbers should be printed with two digits.
 * combinations of numbers should be printed in ascending order
 *
 * Return: always equals 0
 */

int main(void)
{
	int ifirst;
	int i;
	int jfirst;
	int j;

	for (ifirst = 48; ifirst < 58; ifirst++)
	{
		for (i = 48; i < 58; i++)
		{
			j = i + 1;
			jfirst = ifirst;
			for (; jfirst < 58; jfirst++)
			{
				for (; j < 58; j++)
				{
					putchar(ifirst);
					putchar(i);
					putchar(' ');
					putchar(jfirst);
					putchar(j);
					if (ifirst != 57 || jfirst != 57 || i != 56 || j != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				j = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
