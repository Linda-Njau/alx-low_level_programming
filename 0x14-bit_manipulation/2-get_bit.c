#include "main.h"
/**
 * get_bit - returns value of bit at index
 * @n: number being checked
 * @index: position of value to be returned
 * Return: value at position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;
	if (n == 0)
		return (-1);
	if (index >= 64)
		return (-1);
	if (( n & mask) == 0)
		return (0);
	else
		return(1);
}

