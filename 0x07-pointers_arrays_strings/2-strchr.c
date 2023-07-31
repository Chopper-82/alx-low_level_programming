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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
