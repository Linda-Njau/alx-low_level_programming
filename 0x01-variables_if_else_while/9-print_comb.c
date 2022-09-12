#include <stdio.h>
/**
 * main - use main function
 *
 * Description: print single- digit numers
 * Return: should return 0
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
