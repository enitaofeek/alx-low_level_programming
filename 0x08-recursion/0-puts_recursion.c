#include "main.h"

/**
 * _puts_recursion - This function prints a string, followed by a new line.
 * @s: the string to be printed
 *
 * Return: Nothning.
 */

void _puts_recursion(char *s)

{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
