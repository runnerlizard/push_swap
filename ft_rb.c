#include "push_swap.h"

char *ft_rb (int **stack)
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
	return ("rb\n");
}