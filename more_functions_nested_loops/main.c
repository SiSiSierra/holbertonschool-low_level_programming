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

	printf("Task 2 -----\n");
	printf("%d\n", mul(2, 34579834));

	printf("Task 3 -----\n");
	print_numbers();
	
	printf("Task 4 -----\n");
	print_most_numbers();

	printf("Task 5 -----\n");
	more_numbers();

	return (0);
}
