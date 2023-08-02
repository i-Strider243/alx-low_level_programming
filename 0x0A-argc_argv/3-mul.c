#include <stdio.h>
#include "main.h"

/**
 * main - converts a string to an integer
 * @argc: number of arguments
 * @argv: array of arguments
 * @n: string to be converted
 * @result: product of 2 arguments
 * Return: the int converted from the string
 */

int main(int argc, char *argv[])
{
	int i;
	int result;
	(void)argv;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	result = 1;

	for (i = 1; i < argc; i++)
	{
		int n = atoi(argv[i]);

		result *= n;
	}
	printf("%d\n", result);
	return (0);
}
