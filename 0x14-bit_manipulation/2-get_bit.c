#include "main.h"

/**
 * get_bit - get value of bit at index
 * @n: num
 * @index: given index
 * Return: value of bit 
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	num = 1 << index;
	res = n & num;
	if (res == num)
		return (1);

	return (0);
}
