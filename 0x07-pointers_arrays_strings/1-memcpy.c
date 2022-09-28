#include "main.h"

/**
 * _memcpy - function to copy memory
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(src + i) = *(dest + i);
	}
	return (dest);
}
