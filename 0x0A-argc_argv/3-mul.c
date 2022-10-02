#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two integers
 * @argc: argument count
 * @argv: string vector
 * Return: 1 if there are no 2 arguments
 */

int main(int argc, char *argv[])
{
	int result = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
