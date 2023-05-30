#include "main.h"

/**
 * print_nums - helper function that loops through
 * an integer and prints all its digits
 *
 * @ap: lists agruments to be printed
 *
 * Return: ln(length)
 */
int print_nums(va_list ap)
{
	int n, chk, ln;
	unsigned int no;

	n = va_arg(ap, int);
	chk = 1;
	ln = 0;

	if (n < 0)
	{
		ln += _putchar('-');
		no = n * (-1);
	}
	else
		no = n;

	for (; no / chk > 9; )
		chk *= 10;

	for (; chk != '\0'; )
	{
		ln += _putchar('0' + no / chk);
		no %= chk;
		chk /= 10;
	}

	return (ln);
}

/**
 * print_unsigned - prints integer
 *
 * @n: character to be printed
 *
 * Return: number of characters printed
 */
int print_unsigned(unsigned int n)
{
	int c = 1;
	int l = 0;
	unsigned int no;

	no = n;

	for (; no / c > 9; )
		c *= 10;

	for (; c != 0; )
	{
		l += _putchar('0' + no / c);
		no %= c;
		c /= 10;
	}

	return (l);
}

/**
 * print_ints - prints integers
 *
 * @ap: agrument
 *
 * Return: number of characters printed
 */
int print_ints(va_list ap)
{
	int n;

	n = print_nums(ap);

	return (n);
}
