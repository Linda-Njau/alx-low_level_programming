#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two integers
 * @argc: argument count
 * @argv: string vector
 * Return: if no number,print 0
 * error, symbols not digits
 */

int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc == 1)
		printf("0\n");
	else
		for (i = 1; i < argc; i++)
		{
			if ((*argv[i] < '0' || *argv[i] > '9'))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				result += atoi(argv[i]);
			}
			printf("%d\n", result);
		}
	return (0);
}
