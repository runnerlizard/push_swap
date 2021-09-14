#include "push_swap.h"

int ft_nearest(int *a, int middle)
{
	int i;
	int j;

	i = 0;
	j = a[0] + 1;
	while (i++ < j--)
	{
		if (a[i] <= middle)
			return (i);
		if (a[j] <= middle)
			return (-j);
	}
	return(0);
}