#include "main.h"

/**
 * _memcpy -> Copy memory area
 * @dest: Destination of memory area
 * @src: source of memory area
 * @n: Bytes of memory area to copy
 *
 * Return: memory area replaced
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
