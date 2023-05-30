#include "main.h"

/**
  *print_binary - Handles conversion specifer "b"
  *
  *@ap: the argument to be printed
  *
  *Return: Number of characters to be printed
  */

int print_binary(va_list ap)
{
	unsigned int i, j, k, l, sum;
	unsigned int a[32];

	k = va_arg(ap, unsigned int);
	/* equivalent to (2 ^ 31) */
	l = 2147483648;
	a[0] = k / l;

	for (i = 1; i < 32; i++)
	{
		l = l / 2;
		a[i] = (k / l) % 2;
	}

	sum = 0;
		j = 0;
	for (i = 0; i < 32; i++)
	{
		sum = sum + a[i];

		if (sum || i == 31)
		{
			char z = '0' + a[i];

			write(1, &z, 1);
			j++;
		}
	}

	return (j);
}
