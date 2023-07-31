#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: pointer destination
 * @src: pointer source
 * @n: bytes
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];
	return (dest);
}
