#include "push_swap.h"

int ft_sort(int **stack)
{
	ft_print_stack(stack);
	if (ft_is_sorted(stack[0], stack[0][0]) == 1)
		return (0);
	else if (stack[0][0] == 2)
		ft_sort_two(stack);
	else if (stack[0][0] == 3)
		ft_sort_three(stack);
	else if (stack[0][0] == 4)
		ft_sort_four(stack);
	else
		ft_sort_many(stack);
	return (0);
}