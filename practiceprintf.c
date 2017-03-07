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
	unsigned int i = 0;

	form_t formats[] = {
		{"i", form_int},
		{"d", form_dec},
		{"c", form_char},
		{"s", form_str},
		{"%", form_perc},
		{NULL, NULL}
	};

	va_start(toprint, s);

	while (format == NULL)
	{
		myputchar("\n");
		return;
	}

	va_end(toprint);
	myputchar("\n");

	return (0);
}
