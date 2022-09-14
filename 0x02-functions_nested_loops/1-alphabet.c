#include "main.h"
/**
 * print_alphabet -function prints alphabet a to z in lowercase
 *
 * return: 0
 */
void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
