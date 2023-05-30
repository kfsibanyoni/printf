#include "main.h"
#include <stdarg.h>

/**
  *print_rot13 - Handles convertion specifier "R"
  *@list: list to increment
  *@args: the string to be converted to rots13 and printed
  *Return: count of characters to be preinted
  */
int print_rot13(va_list list)
{
	char *str;
	int c = 0;
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);

	for (i = 0; str[i]; i++)
	{
		for (j = 0; input[j]; j++)
		{
			if (input[j] == str[i])
			{
				_putchar(output[j]);
				c++;
				break;
			}
		}
		if (!input[j])
		{
			c += _putchar(str[i]);
		}
	}
	return (c);
}
