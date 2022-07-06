#include "main.h"

/**
 * _isalpha -> Comfirms alphabet style characters
 * @c: charcter to be checked
 * Return: return 0 or 1 depending on conditions
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
