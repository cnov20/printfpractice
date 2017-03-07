#include <stdlib.h>
#define BUFFER_SIZE 1024

void buffer_create(int index*, char *buffer)
{
	write(1, buffer, index);
}

int _strlen(char *s)
{
        int a = 0;
        while (*(s + a))
                a++;
        return (a);
}
