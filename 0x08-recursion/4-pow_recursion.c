#include "main.h"

/**
 * _pow_recursion -> Returns the value of x raised to the power of y
 * @x: number to multiply
 * @y: times to multiply the number
 *
 * Return: the value of multiplication
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * pow_recursion(x, y, -1));
}
