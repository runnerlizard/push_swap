#include "push_swap.h"

int	ft_plus_first(int *a, int n)
{
	int i;
	
	a[0]++;
	i = a[0];
	while (i > 1)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[1] = n;
	return (0);
}
