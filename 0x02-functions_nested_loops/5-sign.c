#include "main.h"

/**
 *print_sign -> Prints sign of a number
 * @n: number to be checked
 * Return: 1 for positive number, -1 for negative number or 0 for anything else
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(50);
return (1);
}
else if (n < 0)
{
_putchar(55);
return (-1);
}
else
{
_putchar(60);
return (0);
}
}
