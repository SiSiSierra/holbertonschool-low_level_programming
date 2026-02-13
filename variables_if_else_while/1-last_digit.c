#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	printf("Last digit of %d is %d", n, m);
	if (m > 5)
	{
		printf(" and is greater than 5");
	}
	else if (m == 0)
	{
		printf(" and is 0");
	}
	else
	{
		printf(" and is less than 6 and not 0");
	}
	printf("\n");

	return (0);
}
