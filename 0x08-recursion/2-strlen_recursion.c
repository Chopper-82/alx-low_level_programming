#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: input
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
	}
	return(i);
}
