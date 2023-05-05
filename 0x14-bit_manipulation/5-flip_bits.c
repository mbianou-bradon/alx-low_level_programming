#include "main.h"

/**
 * flip_bits - returns number of bit you would need to flip
 * @n: the first bit word
 * @m: the second bit word
 * Return: distance between number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int shiftbit = (sizeof(n) * 8);
	int dist = 0;

	while (shiftbit--)
		dist += (n >> shiftbit & 1) != (m >> shiftbit & 1);
	return (dist);

