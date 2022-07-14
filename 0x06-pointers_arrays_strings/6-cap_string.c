#include "main.h"

/**
 * cap_string -> Capitalizes all the words of a string
 * @s: Sting in question
 *
 * Return: Capitalized String
 */
char *cap_string(char *s)
{
	int len = 13;
	int b = 0, i;
	char spc[] = {32, 9, '\n', ',', ';', '!', '?', '"', '(', ')', '{', '}'};

	while (s[b])
	{
		i = 0;

		while (i < len)
		{
			if
			{
				((b = 0 || s[b - 1] == spc[i]) && (s[b] >= 97 && s[b] <= 122))
				s[b] -= 32;
			}

			i++;
		}
		b++;
	}
	return (s);
}
