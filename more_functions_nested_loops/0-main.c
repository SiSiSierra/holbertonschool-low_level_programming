#include <stdio.h>
#include "main.h"

int main(void)
{
	printf("%d", _isupper(64));
	printf("%d", _isupper(65));
	printf("%d", _isupper(90));
	printf("%d", _isupper(91));

	return (0);
}
