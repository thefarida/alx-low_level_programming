#include "main.h"

/**
 * swap_int -> Swaps values of two integers
 *
 * @a: integer to be swapped
 * @b: other integer to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
