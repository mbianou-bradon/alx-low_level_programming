#include "main.h"

/**
 * _isdigit: Checks for digithood
 * @b: Character to check for digit membership
 *
 * Return: 1 if digit, 0 if not a digit
 */

int _isdigit(int b)
{
	if(b >= '0' && b <= '9'){
		return (1);
	}
	return (0);
}
