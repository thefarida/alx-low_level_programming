#include "main.h"

/**
 * rev_string -Reverse a string
 * @s: String to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	char temp;
	int i, length1, length2;

	length1 = 0;
	length2 = 0;

	while (s[length1] != '\0')
		length1++;
	length2 = length1 - 1;
	for (i = 0; i < length1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[length2];
		s[length2] = temp;
		length2 -= 1;
	}
}
