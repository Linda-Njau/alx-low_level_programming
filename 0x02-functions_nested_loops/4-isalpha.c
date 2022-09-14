#include "main.h"
/**
 * _isalpha - shows if character is letter 
 * 
 * Return: one if letter is uppercase, zero otherwise.
 */
int _isalpha(int c)
{
if ((c >= 'A' && C <= 'Z') || (c >= 'a' && c <= 'z'))
{
return(1);
}
else
return(0);
}
