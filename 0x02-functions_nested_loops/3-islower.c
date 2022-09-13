#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 *
 * Description: a function that checks for lowercase character.
 * Return: 1 if true 0 if otherwise
 */

int _islower(int c)
{
	if (c >'a' && c <= 'z')
	{
		return (1);
	}
	else{
		return(0);
	}
}
