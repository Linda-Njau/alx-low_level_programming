#include "main.h"
/**
 * print_sign - print sign of number
 * @n: is the iny used as the arguement
 *
 * Return: 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar (0);
return (0);
}
}
