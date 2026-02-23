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

	_memset(buffer, 2, 10);
	printf("%d", buffer[9]);
	printf("%d\n", buffer[10]);

	return (0);
}
