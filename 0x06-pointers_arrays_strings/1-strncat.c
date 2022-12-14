#include "main.h"
/**
 * _strncat - concatenates two strings and uses at most n bytes
 * @src: one string
 * @dest: other string
 * @n: byte
 * Return: return to dest
 */

char *_strncat(char *dest, char *src, int n)
{
int len = 0;
int i = 0;

while (dest[i++])
	len++;
for (i = 0; src[i] && i < n; i++)
dest[len++] = src[i];

return (dest);
}
