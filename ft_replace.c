#include "push_swap.h"

int	ft_replace (int **stack)
{
	int	i;
	int	j;
	int	pos;

	i = 0;
	stack[0][0] = stack[1][0];
	while (i++ < (stack[1][0]))
	{
		j = 1;
		pos = 1;
		while (j <= stack[1][0])
			if (stack[1][i] > stack[1][j++])
				pos++;
		stack[0][i] = pos;
	}
	return (0);
}