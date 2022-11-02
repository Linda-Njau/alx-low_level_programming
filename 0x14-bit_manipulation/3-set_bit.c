#include "main.h"
/**
 * set_bit - function sets value of bit at given index
 * @n: number to be altered
 * @index: position to be changed
 * Return: 1 if worked -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (n == 0 || index >= 64)
		return (-1);
	*n = *n | mask;
	return (1);
}
