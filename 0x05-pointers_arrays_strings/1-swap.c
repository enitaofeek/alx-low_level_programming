#include "main.h"

#include <stdio.h>

/**
 * swap_int - The swaps the values of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 * Return: Nothing
 */

void swap_int(int *a, int *b)

/* The function that swaps the values of two integers. */

{
	int temp = *a;
	*a = *b;
	*b = temp;

}
