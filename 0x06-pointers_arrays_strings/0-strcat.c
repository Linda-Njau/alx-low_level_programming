#include "main.h"
/**
 **_strcat - appends string overwtiting the terminating null
 * @dest: one string
 *@src: a second string
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
int len = 0;
int i = 0;

for (; dest[len] != '\0'; len++);

for (; src[ii] != '\0';)
dest[len++] = src[i++];

dest[len] = '\0';
return (dest);
}
