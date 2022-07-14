#include "main.h"
#include <stdio.h>

/**
 * cap_string -> Capitalizes all the words of a string
 * @s: Sting in question
 *
 * Return: char value
 */
char *cap_string(char *s)
{
	int b = 0, i;
	int cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[b])
	{
		i = 0;

		while (i < cspc)
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
