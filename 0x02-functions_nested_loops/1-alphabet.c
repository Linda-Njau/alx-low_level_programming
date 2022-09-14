#include "main.h"
/**
 * main - print alphabet
 * Description: using _putchar twice
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
