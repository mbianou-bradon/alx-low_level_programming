#include "main.h"

/**
 * _isupper : Checks for uppercase
 * @c: Character to check for case
 *
 * Return: 1 if uppercase, 0 if not uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
