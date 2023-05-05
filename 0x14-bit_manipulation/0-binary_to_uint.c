#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string with a binary  number.
 *
 * Return: unsigned int with decimal value number or zero if error.
 */
unsigned int binary_to_uint(const char *b);
{
	unsigned int result = 0;
	unsigned int weight = 1;
	char *x = b;
	
	if (b == NULL)
		return (0);

	while (*x != ‘\0’)
	{
		x++;
	}
	x--;
	while (x >= b)
	{
		 if (*x == ‘1’)
			
		{
			result += weight;
		}
		else if (*x != ‘0’)
		{
			return (0);
		}
		weight *= 2;
	x--;
	}
	return (result);
}
