#include <stdio.h>
#include "main.h"

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	char buffer[98] = {0x00};
	char buffer2[50] = {0x01};
	char buffer3[50] = {0x05};
	char *str = "Hello World";
	char *f;
	unsigned int n;
	char *accept = "oleH";

	_memset(buffer, 2, 10);
	printf("%d", buffer[9]);
	printf("%d\n", buffer[10]);

	_memcpy(buffer2, buffer3, 7);
	printf("%d", buffer2[6]);
	printf("%d\n", buffer2[7]);

	f = _strchr(str, 'W');
	printf("%c\n", *f);

	n = _strspn(str, accept);
	printf("%d\n", n);

	f = _strpbrk(str, "World");
	printf("%s\n", f);

	return (0);
}
