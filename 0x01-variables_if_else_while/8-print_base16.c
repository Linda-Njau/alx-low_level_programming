#include <stdio.h>
/**
 * main - print number base 16
 *
 * Description: using the main function
 * print number base 16
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'o'; c <= '9'; c++)
{
	putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}