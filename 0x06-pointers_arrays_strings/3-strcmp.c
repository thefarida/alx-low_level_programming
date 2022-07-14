#include "main.h"

/**
 * _strcmp -> Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: An int Value
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0, y = 0, z = 0, a = 0, lim;

	while (s1[x])
	{
		x++;
	}
	while (s2[y])
	{
		y++;
	}
	if (x <= y)
	{
		lim = x;
	}
	else
	{
		lim = y;
	}
	while (z <= lim)
	{
		if (s1[z] == s2[z])
		{
			z++;
			continue;
		}
		else
		{
			a = s1[z] - s2[z];
			break;
		}
		z++;
	}
	return (a);
}


