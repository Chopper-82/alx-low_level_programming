#include "main.h"
/**
 * _puts_recursion - function like puts(s);
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		__puts_recursion(s +1);
	}
	else
		putchar('\n');
}
