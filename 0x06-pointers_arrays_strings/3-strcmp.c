#include "main.h"
/**
 * _strcmp - Function which compare two strings 
 * @s1
 * @s2
 * Return: zero if identical
 * 	   negative if s1 < s2
 * 	   positive if s1 > s2
 */
 int _strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] == s2[i])
	{
	if (s1[i] == '\0')
	return (0);
	i++;
	}
	return (s1[i] - s2[i]);
}
