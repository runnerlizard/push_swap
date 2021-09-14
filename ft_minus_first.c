#include "push_swap.h"

int ft_minus_first(int *a)
{
	int i;
	
	a[0]--;
	i = 0;
	while (i++ < (a[0]))
	{
		a[i] = a[i + 1];
	}
	return (0);
}