#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - The programme that prints a-z in lower case with a new line
 * Return: 0 (Success)
 */


int main(void)

{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != e && low != q)
	putchar(low);
	}
	putchar('\n');
	return (0);

}
