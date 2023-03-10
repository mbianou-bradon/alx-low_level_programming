#include "main.h"
#include <stdio.h>

/**
 * Main - Prints the number of arguments
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *arg[])
{ 
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
