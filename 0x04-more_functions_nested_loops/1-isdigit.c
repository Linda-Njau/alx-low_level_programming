#include "main.h"

/**
 * _isdigit - checks if character is digit or not
 * @c: tested character
 * Return: 1 if its, 0 if not
 */

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
return (0);
}
