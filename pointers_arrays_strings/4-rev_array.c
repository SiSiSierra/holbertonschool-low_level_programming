#include "main.h"

/**
 * reverse_array - Reverse the contents of an int array
 *
 * @a: The given array
 * @n: The number of elements in a
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int exch;

	n--;
	while (i < n)
	{
		exch = a[n];
		a[n] = a[i];
		a[i] = exch;
	}
}
