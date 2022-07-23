#include "main.h"

/**
 * _strchr -> Locates characters in a string
 * @s: Source of string
 * @c: Character in string to locate
 *
 * Return: the character
 */
char *_strchr(char *s, char c)
{
	int x = 0, y;

	while (s[x])
	{
		x++;
	}
	for (y = 0; y <= x; y++)
	{
		if (c == s[y])
		{
			s += y;
			return (s);
		}
	}
	return ('\0');
}
