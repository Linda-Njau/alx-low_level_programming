#include "variadic_functions.h"
/**
 * sum_them_all - sums all parameters
 * @n: number of parameter
 * @...: variable number if paramters
 * Return: sum of all(int)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);
	return (sum);
}
