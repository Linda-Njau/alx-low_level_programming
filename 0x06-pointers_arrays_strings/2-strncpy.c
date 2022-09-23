#include "main.h"
/**
 * _strncpy - function for copying string plus null byte
 * @dest: string one
 * @src: string two
 * @n: max no of bytes occupied
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	for (; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	for (; i <n; i++)
	dest[i] = '\0';

return (dest);
}
