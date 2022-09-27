#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: accepted character of substring
 * Return: no of bytes in the intial segment of s
 * consiting only of the bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
