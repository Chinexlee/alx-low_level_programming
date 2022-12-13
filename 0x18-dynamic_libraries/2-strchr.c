#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: string s
 * @c: character to be found in the string
 *
 * Return: c if present and '\0' if absent
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
