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
	char buffer2[50] = {0x05};

	_memset(buffer, 2, 10);
	printf("%d", buffer[9]);
	printf("%d\n", buffer[10]);

	_memcpy(buffer, buffer2, 7);
	printf("%d", buffer[6]);
	printf("%d\n", buffer[7]);

	return (0);
}
