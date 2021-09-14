#include "push_swap.h"

int ft_pb (int **stack)
{
	int	i;

	ft_plus_first(stack[1], stack[0][1]);
	ft_minus_first(stack[0]);
	stack[2][0]++;
	i = stack[2][0];
	stack[2][i] = 5;
	ft_printf("pb\n");
	return (0);
}