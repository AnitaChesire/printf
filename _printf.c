#include "main.h"

/**
  * _printf - create a print f
  * @format: format
  * @...: other arguements
  * Return: an integer
  */

int _printf(const char *format, ...)
{
	int char_print = 0, len = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			else if (*format == '%')
			{
				put_char('%');
			}
			else if (*format == 'c')
			{
				put_char(va_arg(args, int));
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				while (str[len] != '\0')
					len++;
				write(1, str, len);
				char_print += (len - 1);
			}
			else if (*format == 'd')
				print_d(va_arg(args, int));

			else if (*format == 'i')
				print_i(va_arg(args, int));
			else if (*format == 'p')
				print_p(va_arg(args, void*));
		}
		char_print++;
		format++;
	}
	va_end(args);
	return (char_print);
}
