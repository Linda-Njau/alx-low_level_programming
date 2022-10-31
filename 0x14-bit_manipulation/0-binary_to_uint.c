#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string containing binary number
 * Return: converted number or 0 if there is one or
 * *more chars not 0 or 1, or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b);
	unsigned int num = 0;
	unsigned int base = 1;
	int i = (len - 1);

	if (b == NULL)
		return (0);
	for (; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			num += base;
		base *= 2;
	}
	return (num);
}
