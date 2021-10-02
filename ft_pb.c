#include "push_swap.h"

char *ft_pb (int **stack)
{
	int	i;

	ft_plus_first(stack[1], stack[0][1]);
	ft_minus_first(stack[0]);
	stack[2][0]++;
	i = stack[2][0];
	stack[2][i] = 5;
	if ((stack[1][0] > 1) && (stack[1][1] < stack[1][2]) && (stack[0][1] > stack[0][2]))
	{
		ft_ss(stack);
		return("pb\nss\n");
	}
	return ("pb\n");
}