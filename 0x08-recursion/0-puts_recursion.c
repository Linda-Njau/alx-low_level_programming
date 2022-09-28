#include "main.h"
/**
 * _puts_recursion - prints string
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_puts_recursion(s + 1);
}
