#include "main.h"

/**
 * print_char - print a character
 *
 * @ap: agrument to be printed
 *
 * Return: Number of characters printed
 */
int print_char(va_list ap)
{
	char val;

	val = va_arg(ap, int);
	_putchar(val);
	return (1);
}

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; len++)
		s++;
	return (len);
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
	char *s;
	int i, l;

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		s = "(null)";
		l = _strlen(s);
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (l);
	}
	else
	{
		l = _strlen(s);
		for (i = 0; i < l; i++)
			_putchar(s[i]);
		return (l);
	}
}

/**
 * print_percent - Prints a percentage sign
 *
 * @ap: arguments to be printed
 *
 * Return: prints the char percent sign
 */
int print_percent(__attribute__((unused)) va_list ap)
{
	_putchar('%');
	return (1);
}
