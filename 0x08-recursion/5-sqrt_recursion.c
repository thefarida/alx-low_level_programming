#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion -> Returns the natural sqaure of a number
 * @n: Number to be squared
 *
 * Return: The natural square
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt -> Calculates the natural square of a number
 * @n: number to be squared
 * @i: iterate number
 *
 * Return: Natural square
 */
int _sqrt(int n, int i);
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
