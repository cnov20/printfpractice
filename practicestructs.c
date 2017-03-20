#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * get_format - function to fetch correct func
 * @s: pointer to char string
 * Return: integer type
 */
int (*get_format(char *s))(int, int)
{
	form_t formats[] = {
		{"i", form_int},
		{"d", form_dec},
		{"c", form_char},
		{"s", form_str},
		{"%", form_perc},
		{NULL, NULL}
	};
	int i = 0;

	while (forms[i].form != NULL)
	{

	}
	return (NULL);
}
