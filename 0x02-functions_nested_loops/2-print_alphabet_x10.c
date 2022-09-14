#include "main.h"
/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
char alphabet, i;

for (i = 1; i <= 10; i++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
}
}
