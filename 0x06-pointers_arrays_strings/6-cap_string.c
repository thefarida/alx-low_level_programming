#include "main.h"

/**
 * cap_string -> Capitalizes words in a string
 * @s: String to be capitalized
 *
 * Return: Capitalized string
 */
char *cap_string(char *s)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len = 13;
	int a = 0, i;

	while (s[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
			{
				s[a] -= 32;
			}
			i++;
		}
		a++;
	}
	return (s);
}
