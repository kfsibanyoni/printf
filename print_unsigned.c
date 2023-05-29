#include "main.h"

/**
  *print_unsigned - prints integer
  *
  *@n: character to be printed
  *
  *Return: number of characters printed
  */

int print_unsigned(unsigned int n)
{
	int c = 1;
	int l = 0;
	unsigned int no;

	no = n;

	for (; no / c > 9; )
		c *= 10;

	for (; c != '\0'; )
	{
		l += _putchar('0' + no / c);
		no %= c;
		c /= 10;
	}

	return (l);
}
