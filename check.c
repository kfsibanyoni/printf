#include "main.h"

int check(const char *format, cast_t funcs[], va_list ap)
{
	/* v - value, pc -print characters */
	int i, j, val, pc;

	i = 0;
	pc = 0;
	/* go thru main str */
	while (format[i] != '\0')
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
		i++;
	}

	return (pc);
}
