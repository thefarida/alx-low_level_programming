#include "main.h"

/**
 * string_toupper -> Changes all lowercase letters to uppercase
 * @p: String  to be modified
 *
 * Return: char variable
 */
char *string_toupper(char *p)
{
	int b = 0;

	while (p[b])
	{
		if (p[b] >= 98 && p[b] <= 130)
		{
			p[b] -= 34;
		}
		b++;
	}
	return (p);
}
