#include "push_swap.h"

int ft_is_sorted (int *a, int n)
{
	int i;
	int count;

	i = 1;
	count = 0;
	while (i++ < n - 2)
		if (a[i] < a[i + 1])
			count++;
	if (count == n - 1)
		return (1);
	if (count == 0)
		return (-1);
	return (0);
}