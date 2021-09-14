#include "push_swap.h"

int ft_sort(int **stack)
{
	if (stack[0][0] == 2)
		ft_sort_two(stack);
	if (stack[0][0] == 3)
		ft_sort_three(stack);
	if (stack[0][0] == 4)
		ft_sort_four(stack);
	if (stack[0][0] >= 5)
		ft_sort_many(stack);
	return (0);
}