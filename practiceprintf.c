#include <stdio.h>
#include <stdarg.h>
#include "practiceholberton.h"
/**
 * _printf - function to print string of specified type
 * @format: pointer to char string
 * Return: integer
 */
int _printf(const char *format, ...)
{
	char *s;
	va_list toprint;
	int i = 0;

	while (format == NULL)
	{
		myputchar("\n");
		return;
	}
	va_start(toprint, format);
	while(format[i] == '%')
	{
		switch (format[i])
		{
		case 's':
			s = va_arg(toprint, char*);
			if (s == NULL)
				s = "(nil)";
			myputchar(s);
			break;
		case 'c':
			myputchar(va_arg(toprint, int));
			break;
		case 'i':
			myputchar(va_arg(toprint, int));
			break;
		case 'f':
			myputchar(va_arg(toprint, double));
			break;
		case '%':
			myputchar('%');
			break;
		}
		i++;
	}
	va_end(toprint);
	myputchar("\n");
}
