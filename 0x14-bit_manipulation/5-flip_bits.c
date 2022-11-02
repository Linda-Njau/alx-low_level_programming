#include "main.h"
/**
 * flip_bits - flips bits to change one number to other.
 * @n: number being flipped.
 * @m: number being flipped into
 * Return: bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int count = 0;

	while (flip)
	{
		count += flip & 1;
		flip = flip >> 1;
	}
	return (count);
}
