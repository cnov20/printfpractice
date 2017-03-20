#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
/**
 * struct form -  Struct form
 * @op: pointer to formatter
 * @f: The function associated
 */
typedef struct form
{
	char *form;
	int (*f)(int a, int b);
} form_t;
int _printf(const char *format, ...);
#endif/* _HOLBERTON_H_ */
