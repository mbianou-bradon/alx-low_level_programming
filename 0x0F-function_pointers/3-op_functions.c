#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* op_add - sum of a and b
* @a : value of in 1
* @b : value of in 2
* Return: result of sum
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - difference of a and b
* @a : value of in 1
* @b : value of in 2
* Return: result of sub
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - product of a and b
* @a : value of in 1
* @b : value of in 2
* Return: result of product
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - division of a by b
* @a : value of in 1
* @b : value of in 2
* Return: result of division
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - remainder of the division of a and b
* @a : value of in 1
* @b : value of in 2
* Return: result of remainder of the division
*/

int op_mod(int a, int b)
{
	return (a % b);
}
