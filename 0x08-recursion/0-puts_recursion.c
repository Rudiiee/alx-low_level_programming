#include "main.h"

/*
 * _puts_recursion function to print a string
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
	}
	else
		_putchar('\n');
}
