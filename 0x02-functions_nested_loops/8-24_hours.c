#include "main.h"

/**
 * jack_bauer -> Prints 24 hours
 *Return: ...
*/
void jack_bauer(void)
{
int w, a, y, z;

for (w = 0; w <= 2; w++)
{
for (a = 0; a <= 3; a++)
{
if ((w <= 1 && a <= 9) || (w <= 2 && a <= 3))
{
for (y = 0; y <= 5; y++)
{
for (z = 0; z <= 9; z++)
{
{
_putchar(w + '0');
_putchar(a + '0');
_putchar(58);
_putchar(y + '0');
_putchar(z + '0');
_putchar('\n');
}
}
}
}
}
}
}
