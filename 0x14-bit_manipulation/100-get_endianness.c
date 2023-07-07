#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if tiny endian
 * Author - Taliya beruke
 * Date - 06-08-23
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
