#include "3-calc.h"
/**
 * op_add - function that adds
 * @a: the first number
 * @b: the second number
(* a blank line
 * Description: this function adds two numbers)?
(* section header: 3-calc.h)*
 * Return: return the result of the add.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts two numbers
 * @a: first number
 * @b: second number
(* blank line
 * Description: this function subtracts two numbers
(* section header: 3-calc.h)*
 * Return: return the result of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Description: a function that returns the multiplication
 *   of two numbers
(* section header: 3-calc.h)*
 * Return: result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this function divide two numbers
 * @a:the first number
 * @b:the second number.
(* a blank line
 * Description: this function divide two numbers)?
(* section header: 3-calc.h)*
 *Return: return the result of the divide.
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - this function calcualte the module
 * @a:the first number
 * @b:the second number.
(* a blank line
 * Description: this function calculate the module)?
 * Return: modulus of the given numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
