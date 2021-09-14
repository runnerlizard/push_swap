#include "push_swap.h"

int ft_sa (int **stack)
{
	int i;
	
	i = stack[0][1];
	stack[0][1] = stack[0][2];
	stack[0][2] = i;
	stack[2][0]++;
	i = stack[2][0];
	stack[2][i] = 1;
	ft_printf("sa\n");
	return (0);
}