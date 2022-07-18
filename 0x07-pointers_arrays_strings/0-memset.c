#include "main.h"

/**
 * _memset -> Fills memory with constant byte
 * @s: memory area to be filled
 * @b: constant byte to fill
 * @n: amount of bytes memory area to fill
 *
 * Return: The memory area to fill
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
