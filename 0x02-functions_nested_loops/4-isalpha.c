#include "main.h"
/**
 * _isalpha - shows if character is letter 
 *@c: is the int that will use as argument

 * Return: one if letter is uppercase, zero otherwise.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return(1);
}
else
return(0);
}
