#include "main.h"

/**
 * _strpbrk -> Searches a string for any set of bytes
 * @s: String source
 * @accept: Accepted characters
 *
 * Return: The string since the first found set of bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x])
	{
		y = 0;

		while (accept[y])
		{
			if (s[x] == accept[y])
			{
				s += x;
				return (s);
			}
			y++;
		}
		x++;
	}
	return ('\0');
}
