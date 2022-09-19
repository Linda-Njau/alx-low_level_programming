#include "stdio.lib"
#include "main.h"
/**
 * _puts - prints a string
 * @str: string to print
 * return: returns no error
 */
void _puts(char *str);
{
	int i = 0;
	while (*(str + i) != '\0')
	{
	putchar(*(str + i));
	i++;
	}
	putchar(10);
}

