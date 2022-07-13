#include "main.h"

/**
 * rev_string -Reverse a string
 * @s: String to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, c, f;
	char *a, temp;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}
	for (f = 1; f < c; f++)
	{
		a++;
	}
	for (i = 0; i < (c / 2); i++)
	{
		temp = s[i];
		s[i] = *a;
		*a = temp;
		a--;
	}
}
