#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a: variable one
 * @b: variable two
 * return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
