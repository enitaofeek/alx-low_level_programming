#include "main.h"


/**
 * _islower - a function that prints 10 times the alphabet, in lowercase
 * @c: The character to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
