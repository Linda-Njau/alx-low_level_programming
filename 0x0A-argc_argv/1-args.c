#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: arguement count
 * @argv: string vector
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
