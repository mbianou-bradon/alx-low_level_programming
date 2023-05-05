#include "main.h"

/**
 * get_bit - get value of bit at index
 * @n: num
 * @index: given index
 * Return: value of bit 
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num;

	if (index > 64)
		return (-1);

	for (num = 0; num < index; num++)
		n >>= 0x1;

	return (n & 0x1);
}

