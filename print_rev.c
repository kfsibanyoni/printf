#include "main.h"

/**
 * print_rev - prints reverse string
 *
 * @ap: arguments list
 *
 * Return: rev. string
 */
int print_rev(va_list ap)
{
	char *str;
	int i, j;

	str = va_arg(ap, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		;

	j = 0;
	for (i = i - 1; i >= 0; i--)
	{
		char z = str[i];

		write(1, &z, 1);
		j++;
	}

	return (j);
}
