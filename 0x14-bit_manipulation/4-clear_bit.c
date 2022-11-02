#include "main.h"
/**
 * clear_bit - sets value to 0.
 *@n: number with bit to be cleared.
 *@index: position of bit to be cleared.
 *Return: 1 if successful, -1 if error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (n == 0 || index >= 64)
		return (-1);

	*n = ~mask & *n;
	return (1);
}
