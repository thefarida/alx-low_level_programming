#include "main.h"
#include <stdio.h>

/**
 * main - Prints the arguments received
 * @argc: Argument count
 * @argv: Argument count
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}