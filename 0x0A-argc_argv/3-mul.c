#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument strings
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int mul = 0;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);

	return (0);
}
