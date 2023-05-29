#include "main.h"

/**
  *print_char: - print a character
  *
  *@ap: agrument to be printed
  *
  *Return: Number of characters printed
  */

int print_char(va_list ap)
{
	char val;

	val = va_arg(ap, int);
	_putchar(val);
	return (1);
}

/**
  *print_str - prints a string
  *
  *@ap: agruments
  *
  *Return: numbers of character printed
  */
int print_str(va_list ap)
{
	const char *s;
	int i;

	s = va_arg(ap, const char *);
	if (s == NULL)
	{
		s = "(null)";
		i = 0;
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			return (i);
			i++;
		}
	}

	return (i);
}
/**
  *print_percent - Prints a percentage sign
  *
  *ap: arguments to be printed
  *
  *Return: prints the char percent sign
  */
int print_percent(__attribute__((unused)) va_list ap)
{
	_putchar('%');
	return (1);
}
/**
  *print_nums - helper function that loops through
  *an integer and prints all its digitd
  *@ap: lists agruments to be printed
  *Reutrn: ln
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
	else no = n;

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
