#include "main.h"

/**
 * binary_to_uint - converts the binary number to unsigned int
 * @x: string that  containins the binary number
 *
 * Return: gets  converted number
 */
unsigned int binary_to_uint(const char *x)
{
	int i;
	unsigned int dec_val = 0;

	if (x)
		return (0);

	for (i = 0; x[i]; i++)
	{
		if (x[i] < '0' || x[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (x[i] - '0');
	}

	return (dec_val);
}
