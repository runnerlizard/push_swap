#include "push_swap.h"

int ft_ra (int **stack)
{
	int	n;
	int	i;

	n = stack[0][1];
	ft_minus_first(stack[0]);
	stack[0][0]++;
	i = stack[0][0];
	stack[0][i] = n;
	stack[2][0]++;
	i = stack[2][0];
	stack[2][i] = 6;
	ft_printf("ra\n");
	return (0);
}