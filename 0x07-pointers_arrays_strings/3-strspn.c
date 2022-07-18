#include "main.h"

/**
 * _strspn -> Gets the length of a string
 * @s: Source of string
 * @accept: The accepted string
 *
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0, y, a = 0;

	while (accept[x])
	{
		y = 0;

		while (s[y] != 32)
		{
			if (accept[x] == s[y])
			{
				a++;
			}
			y++;
		}
		x++;
	}
	return (a);
}
