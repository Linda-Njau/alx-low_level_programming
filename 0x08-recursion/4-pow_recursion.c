#include "main.h"
/**
 * _pow_recursion - find power
 * @y: one value
 * @x: second value
 * Return: value of x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	else
	{
	return
	(x * _pow_recursion(x, y - 1));
	}
}

