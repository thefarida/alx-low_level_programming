#include "main.h"

/**
 * print_alphabet_x10 -> prints lowercase alphabets
 */

void print_alphabet_x10(void)
{
int f;
int x;

for (x = 0; x < 10; x++)
{
for (f = 'a'; f <= 'z'; f++)
{
_putchar(f);
}
_putchar('\n');
}

}
