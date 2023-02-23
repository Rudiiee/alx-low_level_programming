#include <stdio.h>

/**
 * main - prints the size of various types on the
 * computor it is compiled and run on
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %u\n byte(s)", sizeof(char));
	printf("Size of an int: %u\n", sizeof(int)"byte(s)");
	printf("Size of a long int: %u\n", sizeof(long int)"byte(s)");
	printf("Size of a long long int: %u\n", sizeof(long long int)"byte(s)");
	printf("Size of a float: %u\n", sizeof(float)"byte(s)");
	return (0);
}
