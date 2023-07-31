#include "main.h"

/**
 * _strchr - Entry point
 * @c: character to be located
 * @s: string to locate character in
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int i;
	
	i = 0;
	if (s[i] == 'c')
		return (s + i);
	else
		return (NULL)
}
