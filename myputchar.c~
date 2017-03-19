#include <stdio.h>
#include <unistd.h>
#define STDOUT 1
void myputchar(const char *s)
{
	write(1, s, _strlen(s));
}

/**
 * _strlen - prints length string in integer
 * @s: string passed to function
 * Return: a
 */
int _strlen(char *s)
{
	int a = 0;
	while (*(s + a))
		a++;
	return (a);
}
