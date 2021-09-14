#include "push_swap.h"

int ft_rra (int **stack)
{
	int i;
	
	i = stack[0][0];
	i = stack[0][i];
	ft_plus_first(stack[0], i);
	stack[0][0]--;
	stack[2][0]++;
	i = stack[2][0];
	stack[2][i] = 9;
	ft_printf("rra\n");
	return (0);
}