#include <stdio.h>
#include "main.h"

/**
 * _strspn - The function that gets the length of a prefix substring.
 * Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
			n++;
			break;
			}
			else if (accept[r + 1] == '\0')
			return (n);
		}
		s++;
	}
	return (n);
}
