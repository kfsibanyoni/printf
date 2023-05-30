#include "main.h"

/**
 * check - works with compiler to parse functions
 *
 * @format: string
 * @funcs: array of characters
 * @ap: arguments to pass through
 *
 * Return: converted characters
 */
int check(const char *format, cast_t funcs[], va_list ap)
{
	/* v - value, pc -print characters */
	int i, j, val, pc;

	pc = 0;
	/* go thru main str */
	for (i = 0; format[i] != '\0'; i++)
	{
		/* check format specifier */
		if (format[i] == '%')
		{
			/* go thru struct to find right func */
			for (j = 0; funcs[j].symbol != NULL; j++)
			{
				if (format[i + 1] == funcs[j].symbol[0])
				{
					val = funcs[j].f(ap);
					if (val == -1)
						return (-1);
					pc = pc + val;
					break;
				}
			}

			if (funcs[j].symbol == NULL && format[i + 1] != '\0')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					pc = pc + 2;
				}
				else
					return (-1);
			}

			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			pc++;
		}
	}

	return (pc);
}
