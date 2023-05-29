#include "main.h"

int print_char(va_list ap)
{
	char val;

	val = va_arg(ap, int);
	_putchar(val);
	return (1);
}

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

int print_percent(__attribute__((unused)) va_list ap)
{
	_putchar('%');
	return (1);
}
/*
int print_nums(va_list ap)
{
	int n, chk, ln;
	unsigned int no;

	n = va_arg(ap, int);
	chk = 1;
	ln = 0;
*/
int print_ints(va_list ap)
{
	int n;

	n = print_nums(ap);
	return (n);
}
