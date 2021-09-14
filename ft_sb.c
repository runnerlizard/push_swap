#include "push_swap.h"

int ft_sb (int **stack)
{
	int i;
	
	i = stack[1][1];
	stack[1][1] = stack[1][2];
	stack[1][2] = i;
	stack[2][0]++;
	i = stack[2][0];
	stack[2][i] = 2;
	ft_printf("sb\n");
	return (0);
}