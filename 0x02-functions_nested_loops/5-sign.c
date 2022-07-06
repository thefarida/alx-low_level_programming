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
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar(0);
return (0);
}
}
