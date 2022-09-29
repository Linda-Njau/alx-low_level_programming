#include "main.h"
/**
 * sqrt2 - function to be called by _sqrt_recursion
 * @a: number equals to n
 * @b: number that iterates from 1 to n
 * Return: return 1 if successsful
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number integer
 * Return: Returns sqrt2
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
