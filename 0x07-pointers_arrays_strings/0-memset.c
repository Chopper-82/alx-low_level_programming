#include "main.h"

/**
 * _memset - Entry point
 * @s: Destination of pointer
 * @b: Constant bytes
 * @n: bytes
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n: j++)
		s[j] = b;
	return s;
}
