#include "push_swap.h"

char *ft_rrb (int **stack)
{
	int i;
	
	i = stack[1][0];
	i = stack[1][i];
	ft_plus_first(stack[1], i);
	stack[1][0]--;
	stack[2][0]++;
	i = stack[2][0];
	stack[2][i] = 10;
	return ("rrb\n");
}