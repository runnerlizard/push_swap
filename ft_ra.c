#include "push_swap.h"

char *ft_ra (int **stack)
{
	int	n;
	int	i;

	n = stack[0][1];
	ft_minus_first(stack[0]);
	stack[0][0]++;
	i = stack[0][0];
	stack[0][i] = n;
	if ((stack[1][0] > 1) && (stack[1][1] < stack[1][0] / 2))
	{
		ft_rb(stack);
		i = stack[2][0];
		stack[2][i] = 8;
		return("rr\n");
	}
	stack[2][0]++;
	i = stack[2][0];
	stack[2][i] = 6;
	return ("ra\n");
}