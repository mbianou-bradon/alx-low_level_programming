#include <stdio.h>

/**
 *main - print the size of various types
 *
 *Description: prints the size of various types on the computer it is compiled and run on
 *
 *Return 0 (Success)
 *
 *
 */

int main(void)
{
	printf("Size of a char: %d bytes(s)\n", (int) sizeof(char));
	printf("Size of an int: %d bytes(s)\n", (int) sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %d bytes(s)\n", (int) sizeof(long long int));
	printf("Size of a float: %d bytes(s)\n", (int) sizeof(float));

	return(0);
}
