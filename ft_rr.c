#include "push_swap.h"

char *ft_rr (int **stack)
{
	int	i;
	int	n;

	n = stack[0][1];
	ft_minus_first(stack[0]);
	stack[0][0]++;
	i = stack[0][0];
	stack[0][i] = n;
	n = stack[1][1];
	ft_minus_first(stack[1]);
	stack[1][0]++;
	i = stack[1][0];
	stack[1][i] = n;
	stack[2][0]++;
	i = stack[2][0];
	stack[2][i] = 8;
	return ("rr\n");
}