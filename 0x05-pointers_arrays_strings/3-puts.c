#include "main.h"

/**
 * _puts -> Prints a string
 * @str: String to print
 *
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != 0; str++)
	{
		_puts(*str);
	}
	_puts('\n');
}
