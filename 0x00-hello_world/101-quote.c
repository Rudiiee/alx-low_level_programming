#include <stdio.h>

/**
 * main - prints exactly
 *"and that piece of art is useful\" - Dora Korpar, 2015-10-19"
 * followed by a new line
 *
 * Return: 1
 */
int write(const char, unsigned int);
int main(argc)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 13);

	return (1);
}
