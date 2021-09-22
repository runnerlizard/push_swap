#include "push_swap.h"

int ft_sort_three (int **stack)
{
	if ((stack[0][3] > stack[0][2]) && (stack[0][3] > stack[0][1]))
		ft_sort_two(stack);
	if ((stack[0][1] > stack[0][2]) && (stack[0][1] > stack[0][3]))
	{
		ft_printf("%s", ft_ra(stack));
		ft_sort_two(stack);
	}
	if ((stack[0][2] > stack[0][1]) && (stack[0][2] > stack[0][3]))
	{
		ft_printf("%s", ft_rra(stack));
		ft_sort_two(stack);
	}
	return(0);
}