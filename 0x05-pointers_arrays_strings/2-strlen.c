#include "main.h"

#include <stdio.h>

/**
 * _strlen - This function returns the length of a string.
 * @str: The string to get the length
 * Return: The length of @str.
 */

int _strlen(char *str)

{

	size_t length = 0;

	while (*str++)
	length++;
	return (length);

}
