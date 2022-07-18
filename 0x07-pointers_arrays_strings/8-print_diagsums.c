#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -> Prints the sums of two diagonals in a square matrix
 * @a: Matrix
 * @size: Size of matrix
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += a[(size + 1) * b];
		sum2 += a[(size - 1) * (b + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
