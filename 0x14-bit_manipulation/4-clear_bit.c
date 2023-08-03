#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets the value of a bit to 0 at given index
 * @n: Pointer to a number
 * @index: Index starting from 0 of the bit we want to set
 *
 * Return: 1 if it worked or -1 if an error ocurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
