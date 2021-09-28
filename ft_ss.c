#include "push_swap.h"

char *ft_ss (int **stack)
{
	int	i;

	i = stack[0][1];
	stack[0][1] = stack[0][2];
	stack[0][2] = i;
	i = stack[1][1];
	stack[1][1] = stack[1][2];
	stack[1][2] = i;
	stack[2][0]++;
	i = stack[2][0];
	stack[2][i] = 3;
	ft_printf("ss\n");
	return (0);
}