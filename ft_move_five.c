#include "push_swap.h"

static void	ft_ra_until_top(int **stack, int i)
{
	int	max;

	max = -10;
	while (i-- > 0)
		if (stack[0][stack[0][0] - i] == stack[1][0] + stack[3][stack[3][0] + 1] + stack[3][stack[3][0] + 2])
			max = i;
	if (max > 0)
	{
		while (stack[0][1] != stack[1][1])
		{
			if (stack[3][stack[3] + 3] > 0)
			{
				ft_printf("%s", ft_rrr(stack));
				stack[3][stack[3][0] + 3]--;
			}
			else
				ft_printf("%s", ft_rra(stack));
			stack[3][stack[3][0] + 2]--;
			if (stack[0][1] != stack[1][0] - 1)
				ft_printf("%s", ft_pb(stack));
		}
		ft_sort_two(stack);
	}
}

static void	ft_rb_until_top(int **stack, int i)
{
	int	max;

	max = -10;
	while (i-- > 0)
		if (stack[1][stack[1][0] - i] == stack[0][0])
			max = i;
	while (max > 0)
	{
		ft_printf("%s", ft_rrb(stack));
		stack[3][stack[3][0] + 3]--;
		if (stack[1][1] => stack[0][0] - 1)
			ft_printf("%s", ft_pa(stack));
	}
	ft_sort_two(stack);
}

void	ft_move_five(int **stack)
{
	stack[3][stack[3][0] + 1] = 0; //not sorted in a
	stack[3][stack[3][0] + 2] = 0; //ra
	stack[3][stack[3][0] + 3] = 0; //rb
	if (stack[1][1] == stack[1][0])
	{
		ft_printf("%s", ft_pa(stack));
		stack[3][stack[3][0]]--;
	}
	else if (stack[1][2] == stack[1][0])
	{
		if (stack[1][1] > (stack[1][0] - stack[3][stack[3][0]] / 2))
		{
			ft_printf("%s", ft_pa(stack));
			ft_printf("%s", ft_pa(stack));
			ft_printf("%s", ft_sa(stack));
			if (stack[0][1] != stack[1][0] + 1)
				stack[3][stack[3][0] + 1]++;
			stack[3][stack[3][0]] = stack[3][stack[3][0]] - 2;
		}
		else
		{
			ft_printf("%s", ft_rb(stack));
			ft_printf("%s", ft_pa(stack));
			stack[3][stack[3][0]] = stack[3][stack[3][0]] - 1;
			stack[3][stack[3][0] + 3]++;
		}
	}
	else
		if (stack[0][stack[3][0] + 2] > 0)
			ft_ra_until_top(stack, stack[0][stack[3][0] + 2]);
		else if (stack[3][stack[3][0] + 3] > 0)
			ft_rb_until_top(stack, stack[0][stack[3][0] + 2]);
		else
		
}
