#include "push_swap.h"

int ft_pa (int **stack)
{
	int	i;
	ft_plus_first(stack[0], stack[1][1]);
	ft_minus_first(stack[1]);
	stack[2][0]++;
	i = stack[2][0];
	stack[2][i] = 4;
	ft_printf("pa\n");
	return (0);
}