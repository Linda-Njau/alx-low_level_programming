#include "main.h"
/**
 * main - print alphabet
 * Description: using _putchar twice
 *
 * return: 0
 */
print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
