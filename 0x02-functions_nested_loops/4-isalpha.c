#include "main.h"
/**
 * _isalpha - shows if character i a letter
 * @c: int is used for arguments
 *Return: 1 if value is true, zero otherwise.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
