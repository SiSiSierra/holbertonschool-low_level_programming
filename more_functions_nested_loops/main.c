#include <stdio.h>
#include "main.h"

int main(void)
{
	printf("Task 0 -----\n");
	printf("%d", _isupper(64));
	printf("%d", _isupper(65));
	printf("%d", _isupper(90));
	printf("%d", _isupper(91));
	printf("\n");

	printf("Task 1 -----\n");
	printf("%d%d%d%d", _isdigit(47), _isdigit(48), _isdigit(57), _isdigit(58));
	printf("\n");

	return (0);
}
