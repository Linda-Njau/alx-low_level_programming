#include "main.h"
/**
 * _islower -confirms if character is lower case
 *@c: int that will use for argument
 *
 * Description: if c is lower case. return one if not return zero
 *Return: 1 for lower case and zero for false
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
