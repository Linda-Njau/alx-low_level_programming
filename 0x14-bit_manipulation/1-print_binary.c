#include "main.h"
/**
 * print_binary - prints binary number
 * @n: number being converted to binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n >> 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
