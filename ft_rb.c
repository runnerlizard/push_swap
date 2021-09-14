#include "push_swap.h"

int ft_rb (int **stack)
{
	int	n;
	int	i;

	n = stack[1][1];
	ft_minus_first(stack[1]);
	stack[1][0]++;
	i = stack[1][0];
	stack[1][i] = n;
	stack[2][0]++;
	i = stack[2][0];
	stack[2][i] = 7;
	ft_printf("rb\n");
	return (0);
}