#include "push_swap.h"

char *ft_sa (int **stack)
{
	int i;
	
	i = stack[0][1];
	stack[0][1] = stack[0][2];
	stack[0][2] = i;
	stack[2][0]++;
	i = stack[2][0];
	stack[2][i] = 1;
	return ("sa\n");
}