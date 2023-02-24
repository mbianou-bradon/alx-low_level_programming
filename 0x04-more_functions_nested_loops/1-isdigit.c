#include "main.h"

/**
 * _isdigit - Checks for digithood
 * @c: Character to check for digit membership
 *
 * Return: 1 if digit, 0 if not a digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
