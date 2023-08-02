#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);

	return (0);
}
