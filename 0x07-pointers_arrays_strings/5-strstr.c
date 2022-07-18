#include "main.h"

/**
 * _strstr -> Locates a substring
 * @haystack: String to be searched
 * @needle: The string to find
 *
 * Return: Character Value
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0, y = 0;

	while (haystack[x])
	{
		while (needle[y])
		{
			if (haystack[x + y] != needle[y])
			{
				break;
			}
			y++;
		}
		if (needle[y] == '\0')
		{
			return (haystack + x);
		}
		x++;
	}
	return ('\0');
}
