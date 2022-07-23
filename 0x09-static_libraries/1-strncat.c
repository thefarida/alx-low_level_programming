#include "main.h"

/**
 * _strncat -> Concatenates two strings
 * @dest: Destination value
 * @src: Source value
 * @n: Limit of Concatenation
 *
 * Return: Pointer to concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, b = 0;

	while (dest[dlen])
	{
		dlen++;
	}
	while (b < n && src[b])
	{
		dest[dlen] = src[b];
		dlen++;
		b++;
	}
	dest[dlen + n + 1] = '\0';

	return (dest);
}
