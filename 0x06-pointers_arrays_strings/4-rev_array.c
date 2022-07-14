#include "main.h"
#include <stdio.h>

/**
 * reverse_array -> Reverses the content of an array
 * @n: number of elements to be reversed
 * @a: An array of integers
 *
 * Return: empty
 */
void reverse_array(int *a, int n)
{
	int *t, i, temp, x;

	t = a;
	for (i = 1; i < n; i++)
	{
		t++;
	}
	for (x = 0; x < i / 2; x++)
	{
		temp = a[x];
		a[x] = *t;
		*t = temp;
		t--;
	}
}
